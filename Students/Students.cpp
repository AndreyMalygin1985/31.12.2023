#include "Students.h"

void Students::showStudents(const vector<Students>& student) {
	for (const auto& student : student) {
		cout << student << endl;
	}
	cout << endl;
}

ostream& operator<<(ostream& os, const Students& student) {
	os << "Имя: " << student.firstName << " " << student.lastName << ", Курс: " << student.course;
	return os;
}
bool Students::sortByLastName(const Students& student1, const Students& student2) {
	return student1.lastName < student2.lastName;
}

bool Students::sortByCourse(const Students& student1, const Students& student2) {
	return student1.course < student2.course;
}

void Students::nurtureStudent(vector<Students>& students) {
	students.push_back(Students("Лолита", "Подошва", 3));
	students.push_back(Students("Дыня", "Мерлин", 2));
	students.push_back(Students("Психея", "Ватник", 4));
	students.push_back(Students("Цилиндра", "Гробокопатель", 1));
	students.push_back(Students("Моня", "Плешивый", 3));
	students.push_back(Students("Лея", "Шеренга", 2));
	students.push_back(Students("Шлема", "Робовыкамень", 3));
	students.push_back(Students("Ицык", "Лечица", 1));
	students.push_back(Students("Меня", "Шалашибес", 1));
	students.push_back(Students("Ривка", "Лопата", 2));
	students.push_back(Students("Лена", "Циферблат", 4));
	students.push_back(Students("Арон", "Выгода", 4));
}

bool Students::operator<(const Students& other) const {
	return firstName < other.firstName;
}

