#pragma once
#include <iostream>
#ifndef Course_h_
#include <string>
#define Course_h_
using namespace std;
class Course
{
private:
	string courseName, courseCode, courseGrade;
		float coursePoint;
	int courseYear, courseSemester;
public:
	Course()
	{
		courseName = "";
		courseCode = "";
		courseGrade = "";
		coursePoint = 0;
		courseYear = 0;
		courseSemester = 0;
	}
	void printCourseInfo()
	{
		cout << "the courseName is " << courseName << endl <<
			"the coursCode  is " << courseCode << endl <<
			"the courseGrade is  " << courseGrade << endl <<
			"the coursePoint is " << coursePoint << endl <<
			"the courseYear is " << courseYear << endl <<
			"the courseSemester is " << courseSemester << endl;
	}
	
	void setCoursname(string s)
	{
		courseName = s;
	}
	void setCoursecode(string s)
	{
		courseCode = s;
	}
	void setCoursegrade(string s)
	{
		courseGrade = s;
	}
	void setCoursepoint(float s)
	{
		coursePoint = s;
	}
	void setCourseyear(int d)
	{
		courseYear = d;
	}
	void setCoursesemester(int d)
	{
		courseSemester = d;
	}
	//----------------------------------
	
	string getCoursname()
	{
		return courseName;
	}
	string getCoursecode()
	{
		return courseCode;
	}
	string getCoursegrade()
	{
		return courseGrade;
	}
	float getCoursepoint()
	{
		return coursePoint;
	}
	int getCourseyear()
	{
		return courseYear;
	}
	int getCoursesemester()
	{
		return courseSemester;
	}
};

#endif