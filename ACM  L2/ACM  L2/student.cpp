#include "student.h"


void student::set_name(string _name){
	this->name = _name;
}
void student::set_GPA(double _gpa){
	this->GPA = _gpa;
}
void student::set_CH(int _ch){
	this->creditHours = _ch;
}
student::student(){
	name = "Null";
	creditHours = 0;
	GPA = 1;
}
student::student(string _name, int _ch, double _GPA,string _S_course)
{
	this->name = _name;
	this->GPA = _GPA;
	this->creditHours = _ch;
	StdCourse.push_back(_S_course);
}

int  student::get_courses_number(){

	return StdCourse.size();
}

void student::add_course(string _C_name){

	StdCourse.push_back(_C_name);
}
void student::fetch_courses(){
	for (int i = 0; i < StdCourse.size(); i++)
	{
		cout << StdCourse[i] << endl;
	}
}
double student::get_GPA(){
	return GPA;

}
int student::get_CH(){
	return creditHours;
}
string student::get_name(){
	return name;
}
student::~student()
{

}
