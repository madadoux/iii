#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include<iostream>
#include "faculty.h"
using namespace std;
int main()
{
	//freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
	faculty f1;

	cout << "You have to set the 3 courses in ur faculty : " << endl;
	f1.SetAvialCourses();


	cout << "Choose the way u want to register the students (unlimted number): \n\n Student name then his course [ex: mada c++] \nEnter 1  \n\n Add the students directly to course you choose [ex: c++ >> mada >> awad] \nEnter 2 \n";
     a:	string  a, b; int cho; cin >> cho;
	if (cho == 1)
	{

		for (int i = 0; i < 15; i++)
		{
			cout << "Enter student name : " << endl;
			cin >> a;
			cin >> b;
			cout << "Enter which course he/she will be in : " << endl;

			f1.reg_student(a, b);


		}
	}

	else if (cho == 2){
		char ch;
		
		do{
			cout << "Enter the name of the course that you want to add students to it [remember that course name must be one of available courses that you have set !]  " << endl;
		c:  cin >> b;
			
			if (f1.is_course_setted(b) == true)
			{

				while (true)
				{

					string name;
					cin >> name;
					if (name == "0"){

						break;
					}
					f1.reg_student(name, b);
				}


			}
			else{
				cout << "Bad input .. no such course try again ! :) " << endl;
				goto c;
			}
			cout << "Enter another data ? (y/n)" << endl;
			cin >> ch;
		} while (ch == 'y' || ch == 'Y');
		

	}
	else{
		cout << "Bad choise please Choose 1 or 2 only " << endl;
		goto a;
	}
	int cho2;
	do
	{
	cout << "After setted your data.. you want to \nSee student_affair of someone[1] \nList the students of any course[2] \nQuit [0]" << endl;
	cin >> cho2;
	if (cho2 == 1){
		cout << "Enter the name of student please " << endl;
		string Sn;
		cin >> Sn;
		f1.student_affair(Sn);
	}
	else if (cho2==2)
	{
		cout << "Enter the name of course please " << endl;
		string Cn;
		cin >> Cn;
		f1.get_students_of(Cn);
	}

	} while (cho2 != 0);
	
}