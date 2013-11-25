#ifndef STUDENTSHOUSE_H
#define STUDENTSHOUSE_H
#pragma once
#include <vector>
#include "students.h"
using namespace std;
class StudentsHouse
{
public:
	virtual ~StudentsHouse();
	void list();
	void in();
	void out();
	void luru();
	int pos;
private:
	vector<student *> students;
	student* find(student* a);
};
extern StudentsHouse studentshouse;
#endif