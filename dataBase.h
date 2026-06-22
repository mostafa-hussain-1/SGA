#pragma once
#include <string>
#include <QString>
using namespace std;

string GetDatabasePath(const string& fileName);

void save_data(); 

void load_data();

void save_semester_data(); 

void load_semester_data();

void save_all_to_file();

void load_messages();

QString toQString(const string& str);

string toStdString(const QString& qstr);

void check_updates();