// StudentCalendar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
#include "Student.h"
#include "StudentCollection.h"

using namespace std;

int main() {
	Date date1(1970, Date::Month::January, 17);
	cout << date1 << endl;
	Student student1("georgi", 123456, date1, 4);
	cout << student1<< endl;
	cout << student1.studentAge(Date(1977, Date::Month::January, 10))<< endl;
	StudentCollection studentCollection1;
	for (int i = 0; i < 13; ++i) {
		studentCollection1.append(student1);
	}
	cout << studentCollection1[5];
}