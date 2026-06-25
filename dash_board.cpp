#include <string>
#include <fstream>
#include <vector>
#include "SGA_array.h"
#include "dash_board.h"
#include "semester_progress.h"

using namespace std;

SGA_array<string> messages;

SGA_array <course> courses;
SGA_array <double> term_gpas;
SGA_array <double> cgpas;
int academic_alert;

vector<string> grade_scale = {
	"A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "F"
};
vector<double> grade_points = {
	4.0, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.0
};
vector<int> grade_marks = {
	97, 93, 89, 84, 80, 76, 73, 70, 67, 64, 60, 0
};

double get_points (string grade){
	for (int i = 0; i < grade_scale.size(); i++)
	{
		if (grade == grade_scale[i]) return grade_points[i];
	}
    return 0.00;
}

bool add_course (course c){
    for (int i = 0; i < courses.size(); i++) {
        if (c.code == courses[i].code && c.semester == courses[i].semester) {
            return false;
        }
    }
	c.points = get_points(c.grade);
	for (int i = 0; i < courses.size(); i++) {
		if (courses[i].code == c.code) {
			courses[i].is_latest_version = false;
            break;
		}
	}
	courses.push_back(c);
	update_dashboard();
    return true;
}
void edit_course(course c, int index){
    c.is_latest_version = courses[index].is_latest_version;
    c.points = get_points(c.grade);
    courses[index] = c;
    update_dashboard();
}
void remove_course (int index){

	string code = courses[index].code;
	courses.erase(index);

	for (int i = courses.size() - 1; i >= 0; i--)
	{
		if (courses[i].code == code)
		{
			courses[i].is_latest_version = true;
			break;
		}
	}
	update_dashboard();
}

double calculate_gpa(){
	double total_points = 0;
	int total_credit_hours = 0;
	for (int i = 0; i < courses.size(); i++)
	{
		if (courses[i].count_in_gpa && courses[i].is_latest_version) {
			total_points += courses[i].points * courses[i].credit_hours;
			total_credit_hours += courses[i].credit_hours;
		}
	}
	if (total_credit_hours == 0) return 0.0;
	return total_points / total_credit_hours;
}

void calculate_term_gpa() {

	double term_points = 0;
	int term_hours = 0;

	int current_semester = 0;

	double total_points = 0;
	int total_hours = 0;
	
	academic_alert = 0;
	term_gpas.clear();
	cgpas.clear();

	for (int i = 0; i < courses.size(); i++) {
		if (courses[i].semester > current_semester) {
			current_semester = courses[i].semester;
		}
	}
	for (int i = 0; i < current_semester; i++)
	{
		// calculate term gpa
		term_points = 0;
		term_hours = 0;
		for (int j = 0; j < courses.size(); j++) {
			if (courses[j].semester == i + 1 && courses[j].count_in_gpa) {
				term_points += courses[j].points * courses[j].credit_hours;
				term_hours += courses[j].credit_hours;
			}
		}
		if (term_hours == 0) term_gpas.push_back(0.0);
		else term_gpas.push_back(term_points / term_hours);

		// calculate cumulative gpa
		total_hours = 0;
		total_points = 0;
		for (int j = 0; j < courses.size(); j++) {
			if (courses[j].semester <= i + 1 && courses[j].count_in_gpa) {
				
				bool has_newer_version = false;
				for (int k = 0; k < courses.size(); k++) {
					if (courses[k].code == courses[j].code &&
						courses[k].semester > courses[j].semester &&
						courses[k].semester <= i + 1) {
						has_newer_version = true;
						break;
					}
				}
				if (!has_newer_version) {
					total_points += courses[j].points * courses[j].credit_hours;
					total_hours += courses[j].credit_hours;
				}
			}
		}

		if (total_hours == 0) cgpas.push_back(0.0);
		else {
			cgpas.push_back(total_points / total_hours);
			if ((total_points / total_hours) < 2.0) academic_alert++;
		}
	}
}


int registration_limit() {
	double gpa = calculate_gpa();
	if (gpa >= 3.0) return 21;
	else if (gpa >= 2.0) return 18;
	else return 14;
}

int total_hours() {
	int total = 0;
	for (int i = 0; i < courses.size(); i++)
	{
		if (courses[i].grade != "F" && courses[i].is_latest_version)
			total += courses[i].credit_hours;
	}
	return total;
}

string academic_level() {
	if (total_hours() < 36) return "Freshman";
	else if (total_hours() < 69) return "Sophomore";
	else if (total_hours() < 104) return "Junior";
	else return "Senior";
}


void update_dashboard() {
	calculate_term_gpa();
	double current_gpa = calculate_gpa();
	int hours = total_hours();
	string level = academic_level();
	int alert = academic_alert;
}

