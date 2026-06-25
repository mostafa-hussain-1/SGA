#pragma once
#include <string>
#include <vector>
#include "SGA_array.h"
using namespace std;

struct course
{
	string code;
	string name;
	string grade;
	int credit_hours;
	double points;
	int semester;
	bool count_in_gpa;
	bool is_latest_version = true;
};


extern SGA_array <course> courses;
extern SGA_array <double> term_gpas;
extern SGA_array <double> cgpas;
extern int academic_alert;
extern SGA_array <string> messages;

extern vector<string> grade_scale;
extern vector<double> grade_points;
extern vector<int> grade_marks;

double get_points(string grade);

bool add_course(course c);
void edit_course(course c, int index);
void remove_course(int index);

double calculate_gpa();


void calculate_term_gpa();

int registration_limit();

int total_hours();

string academic_level();


void update_dashboard();

