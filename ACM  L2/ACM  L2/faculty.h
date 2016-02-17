#pragma once
#include <iostream>
#include <string>
#include "course.h"
#include "student.h"
#include <vector>
using namespace std;
class faculty
{
	
      course c[3];
	
public:

	faculty();
	~faculty();
	void SetAvialCourses();
	void reg_student(string _name, string _course_name);
	void get_students_of(string _Cname);
	void get_students_of_CN(int _n);
	void student_affair(string _Sname);
	void get_courses();
	int find_course_num(string _Cname);
	int getCoursesCount();
	bool is_course_setted(string _name);

};

