#pragma once
#include <iostream>
#include "Course.h"
using namespace std;
#ifndef Student_h_
#include <string>
#define Student_h_
#include "FCIvector.h"
class Student
{
private:
	string name;
	int ID;
	string Department;
	FCIvector<Course>cors;
public:
	Student()
	{
		name = "";
		ID = 0;
		Department = "";
	}
	
	void printInfo()
	{
		cout << "the name is " << name << endl <<
			"the ID is " << ID << endl <<
			"the department is " << Department << endl;
		for (int i = 0; i < cors.size();i++)
		{
			cout << "Course " << i + 1 << " info" << endl;
			cout << "Course name : " << cors[i].getCoursname() << endl;
			cout << "Course code : " << cors[i].getCoursecode() << endl;
			cout << "Course grade : " << cors[i].getCoursegrade() << endl;
			cout << "Course point : " << cors[i].getCoursepoint() << endl;
			cout << "Course semester : " << cors[i].getCoursesemester() << endl;
			cout << "Course year : " << cors[i].getCourseyear() << endl;
			}
	}
	void set()
	{
		int numofcources;
		cout << "Student name : " << endl;
		cin >> name;
		cout << " student ID : " << endl;
		cin >> ID;
		cout << "department : " << endl;
		cin >> Department;
		cout << "How many cources ? : ";
		cin >> numofcources;
		for (int i = 0; i < numofcources; i++)
		{
			Course s;
			string cname;
			string cgrade;
			int year, semes;
			string code;
			float point;
			cout << "Enter course name : ";
			cin >> cname;
			s.setCoursname(cname);
			cout << "Enter course grade : ";
			cin >> cgrade;
			s.setCoursegrade(cgrade);
			cout << "Enter Course point :  ";
			cin >> point;
			s.setCoursepoint(point);
			cout << "Enter the course code :  ";
			cin >> code;
			s.setCoursecode(code);
			cout << "Enter the course year  :  ";
			cin >> year;
			s.setCourseyear(year);
			cout << " Enter the course semster   :  ";
			cin >> semes;
			s.setCoursesemester(semes);
			cors.push_back(s);
		}
	}
};
#endif
