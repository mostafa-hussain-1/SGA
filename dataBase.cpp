#include <fstream>
#include <sstream>
#include <string>
#include <QStandardPaths>
#include <QDir>
#include <QString>
#include "dash_board.h"
#include "semester_progress.h"
#include "dataBase.h"

using namespace std;

string GetDatabasePath(const string& fileName) {

    QString appDataPath = QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation);

    QString appFolder = appDataPath + "/SGA";

    QDir dir;
    if (!dir.exists(appFolder)) {
        dir.mkpath(appFolder);
    }

    QString fullFilePath = appFolder + "/" + QString::fromStdString(fileName);

    return fullFilePath.toStdString();
}

void save_data() {

    string dbPath = GetDatabasePath("courses_data.txt");
	ofstream file(dbPath, ios::trunc);
	for (int i = 0; i < courses.size(); i++)
	{
		file << courses[i].code << ',' << courses[i].name << ',' << courses[i].grade << ','
			<< courses[i].credit_hours << ',' << courses[i].semester << ','
			<< courses[i].count_in_gpa << ',' << courses[i].is_latest_version << ',' << courses[i].points << ',' << endl;
	}
	file.close();
}

void load_data() {
    string dbPath = GetDatabasePath("courses_data.txt");
	ifstream file(dbPath, ios::in);
	if (!file.is_open()) return;

	string line;
	course c;
	string token;

	while (getline(file, line))
	{
		
		stringstream ss(line);
		getline(ss, c.code, ',');
		getline(ss, c.name, ',');
		getline(ss, c.grade, ',');
		getline(ss, token, ',');
		c.credit_hours = stoi(token);
		getline(ss, token, ',');
		c.semester = stoi(token);
		getline(ss, token, ',');
		c.count_in_gpa = (token == "1");
		getline(ss, token, ',');
		c.is_latest_version = (token == "1");
		getline(ss, token, ',');
		c.points = stod(token);
		courses.push_back(c);
	}
	file.close();
	update_dashboard();
}


void save_semester_data() {

    string dbPath = GetDatabasePath("semester_data.txt");
	ofstream file(dbPath, ios::trunc);
	file << target_cgpa << endl;
	for (int i = 0; i < current_semester_courses.size(); i++)
	{
		file << current_semester_courses[i].course_code << ',' << current_semester_courses[i].course_name << ',' << current_semester_courses[i].credit_hours << ','
			<< current_semester_courses[i].target_grade << ',' << current_semester_courses[i].points << ','
			<< current_semester_courses[i].midterm << ',' << current_semester_courses[i].quiz << ',' << current_semester_courses[i].year_work << ',' << current_semester_courses[i].practical << ','
			<< current_semester_courses[i].has_practical << ',' << current_semester_courses[i].total_year_work << ',' << current_semester_courses[i].required_final_grade << ',' << endl;
	}
	file.close();
}

void load_semester_data() {
    string dbPath = GetDatabasePath("semester_data.txt");
	ifstream file(dbPath, ios::in);
	if (!file.is_open()) return;
	string line;

	string token;
	getline(file, line);
	target_cgpa = stod(line);


	semester_course c;

	while (getline(file, line))
	{
		stringstream ss(line);
		
		getline(ss, c.course_code, ',');
		getline(ss, c.course_name, ',');
		getline(ss, token, ',');
		c.credit_hours = stoi(token);
		getline(ss, c.target_grade, ',');
		getline(ss, token, ',');
		c.points = stod(token);
		getline(ss, token, ',');
		c.midterm = stod(token);
		getline(ss, token, ',');
		c.quiz = stod(token);
		getline(ss, token, ',');
		c.year_work = stod(token);
		getline(ss, token, ',');
		c.practical = stod(token);
		getline(ss, token, ',');
		c.has_practical = (token == "1");
		getline(ss, token, ',');
		c.total_year_work = stod(token);
		getline(ss, token, ',');
		c.required_final_grade = stod(token);

		current_semester_courses.push_back(c);
	}
	file.close();
	update_dashboard();
}


void save_all_to_file() {
	save_data();
	save_semester_data();
}


QString toQString(const string& str) {
    return QString::fromStdString(str);
}

string toStdString(const QString& qstr) {
    return qstr.toStdString();
}


