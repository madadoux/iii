#include "faculty.h"


faculty::faculty()
{
	/*c[1].set_name("java");
	c[2].set_name("c++");
	c[3].set_name("C#");*/

}

/*int faculty::getCoursesCount(){
	return c.size();
}*/
void faculty::SetAvialCourses()
{
	for (int i = 0; i < 3; i++)
	{
		string _name; 
		cin >> _name;
		c[i].set_name(_name);

	}
}

int  faculty::find_course_num(string _Cname){
	int ind = 0;
	for (int i = 0; i < 3; i++)
	{
		if (c[i].get_name() == _Cname)
		{
			ind = i; break;
		}

	}
	return ind;
}
void faculty::get_students_of(string _Cname){
	int ind=-1;

	for (int i = 0; i < 3; i++)
	{
		if (c[i].get_name() == _Cname)
		{
			ind = i; break;
		}
		
	}

	if (ind != -1)
		c[ind].get_students();
	else
		cout << "NO such course setted with this name " << endl;
}
void faculty::reg_student(string _name, string _course_name){
	//searching and pushing 
	bool reg_bfr = 0;
	int ind, ind2;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < c[i].stds.size(); j++)
		{
			if (c[i].stds[j].get_name() == _name)
			{
				ind = i; ind2 = j; reg_bfr = 1; break;
			}
		}
	}
	

	if (reg_bfr == 0){
		for (int i = 0; i < 3; i++)
		{
			if (c[i].get_name() == _course_name)
			{
				c[i].set_student(_name, _course_name);
			}
		}
	}
	else{

		c[ind].stds[ind2].add_course(_course_name);
	}

}

void faculty::student_affair(string _Sname){

	bool found = 0;
	int ind,ind2;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < c[i].stds.size(); j++)
		{
			if (c[i].stds[j].get_name() == _Sname)
			{
				ind = i; ind2 = j; found = 1; break;
			}
		}
	}
	if (found == 1)
	{
		cout << "He/she enroled in " << c[ind].stds[ind2].get_courses_number() << " courses which are :" << endl;
		c[ind].stds[ind2].fetch_courses();
		
	}
	else
	{
		cout << "NO student with this name in our database enter his name correctly ! please" << endl;
	}
}
faculty::~faculty()
{
}
bool faculty::is_course_setted(string _name){

	bool found = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			if (c[i].get_name() == _name)
			{
				found = 1;
			}

		}
	}


	if (found == 1)
		return true;
	else
		return false;
}

void faculty::get_courses(){
	for (int i = 0; i < 3; i++)
	{
		cout << c[i].get_name() << endl;
	}
}