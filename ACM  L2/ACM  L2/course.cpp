#include "course.h"


course::course(string _name, int _ID, int _c_time){
	this->name = _name;
	this->ID = _ID;
	this->c_time = _c_time;

}

string course::get_name(){
	return name;
}
int course::get_ID(){
	return ID;
}

int course::get_C_time(){
	return c_time;
}

void course::get_students(){

	for (int i = 0; i < stds.size(); i++)
	{
		cout << stds[i].get_name() << endl;

	}
}
void course::set_student(string _name,string _S_course)
{
	stds.push_back(student(_name, 20, 1.5,_S_course));
}
void course::set_C_time(int _c_time){
	c_time = _c_time;
}
void course::set_name(string _name){
	name = _name;
}
void course::set_ID(int _ID){
	ID = _ID;
}
course::course(){

}