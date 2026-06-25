#pragma once
#include <string>
#include "SGA_array.h"
using namespace std;

struct semester_course {
	string course_code;
	string course_name;
	int credit_hours;
	string target_grade;
	double points = 0.0;
	double midterm = 0.0;
	double quiz = 0.0;
	double year_work = 0.0;
	double practical = 0.0;

	bool has_practical = false;

	double total_year_work = 0.0;
	double required_final_grade;
};

enum class CourseStatus {
    SUCCESS,
    RETAKE_ERROR,
    DUPLICATE_ERROR
};

extern double target_cgpa;

extern SGA_array<semester_course> current_semester_courses;

double calculate_target(double currentCGPA, int currentCredits, int currentTermCredits, double targetCGPA);

int current_term_credits();

CourseStatus process_semester_course(semester_course& c, bool is_edit, int edit_index);

void add_sem_course(semester_course c);

void remove_semester_course(int index);

double calculate_plan_gpa();

double calculate_semester_progress();