#include <string>
#include <fstream>
#include "sga.h"
#include "semester_progress.h"
using namespace std;


SGA_array<semester_course> current_semester_courses;

double target_cgpa = 0.000;

double calculate_target(double currentCGPA, int currentCredits, int currentTermCredits, double targetCGPA) {

	if (currentTermCredits <= 0) return 0.0;

	int totalCredits = currentCredits + currentTermCredits;

	double requiredGPA = (targetCGPA * totalCredits - currentCGPA * currentCredits) / currentTermCredits;

	return requiredGPA;
}

int current_term_credits() {
	int currentTermCredits = 0;
	for (int i = 0; i < current_semester_courses.size(); i++)
	{
		currentTermCredits += current_semester_courses[i].credit_hours;
	}
	return currentTermCredits;
}

void add_sem_course(semester_course c) {
	
	int currentTermCredits = c.credit_hours + current_term_credits();

	c.points = get_points(c.target_grade);
	current_semester_courses.push_back(c);
}

void remove_semester_course(int index) {

	string code = current_semester_courses[index].course_code;
	current_semester_courses.erase(index);
}


double calculate_plan_gpa() {
	double total_points = 0;
	int total_credit_hours = 0;
	for (int i = 0; i < current_semester_courses.size(); i++)
	{
		total_points += current_semester_courses[i].points * current_semester_courses[i].credit_hours;
		total_credit_hours += current_semester_courses[i].credit_hours;
	}

	if (total_credit_hours == 0) return 0.0;
	return total_points / total_credit_hours;
}


double calculate_semester_progress(){
    double total_possible_points = 0.0;
    double total_earned_points = 0.0;

    for (int i = 0; i < (int)current_semester_courses.size(); i++) {

        double max_course_points = current_semester_courses[i].has_practical ? 50.0 : 40.0;

        double earned_in_course = current_semester_courses[i].total_year_work;

        total_possible_points += max_course_points;
        total_earned_points += earned_in_course;
    }

    double progress_percentage = 0.0;
    if (total_possible_points > 0.0) {
        progress_percentage = (total_earned_points / total_possible_points) * 100.0;
    }

    return progress_percentage;
}