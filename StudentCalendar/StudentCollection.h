#pragma once

#include "Student.h"

class StudentCollection {
public:
	StudentCollection();
	StudentCollection(const StudentCollection& other);
	StudentCollection& operator=(const StudentCollection& other);
	~StudentCollection();

	void append(const Student& other);

	Student& operator[](int index);

private:
	Student* data;
	int size;
	int capacity;

	void copyData(const StudentCollection& other);
	void clearData();

	void expand();
};
