#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include <vector>
using namespace std;

class course{
	string name; int ID, c_time;
	
public:
	vector<student>stds;
	course();
	course(string _name, int _ID, int _c_time);
	string get_name();
	int get_ID();
	int get_C_time();
	void set_student(string _name,string _S_course);
	void get_students();
	void set_name(string _name);
	void set_ID(int _ID);
	void set_C_time( int _c_time);

};