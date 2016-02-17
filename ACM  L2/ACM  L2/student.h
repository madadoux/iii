#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class student{

	string name;
	int creditHours;
	double GPA;
	vector <string >StdCourse;
public:
	student();
	student(string _name, int _credit_hours, double _GPA,string _S_course);
	~student();
	void set_name(string);
	void set_CH(int);
	void set_GPA(double);
	void add_course(string _C_name);
	void fetch_courses();
	string get_name();
	int get_CH();
	double get_GPA();
	int get_courses_number();
};

