#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>
using namespace std;

class Students
{
	string firstName;
	string lastName;
	int course;

public:
	Students(const string& firstName, const string& lastName, int course)
		: firstName(firstName), lastName(lastName), course(course) {}

	static friend ostream& operator<<(ostream& os, const Students& student);
	bool operator<(const Students& other) const;

	static bool sortByLastName(const Students& student1, const Students& student2);
	static bool sortByCourse(const Students& student1, const Students& student2);
	static void nurtureStudent(vector<Students>& students);
	static void showStudents(const vector<Students>& students);
};