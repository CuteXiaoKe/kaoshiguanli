#ifndef INSTUDENTSHOUSE_H
#define INSTUDENTSHOUDE_H
#pragma once
#include "StudentsHouse.h"
#include "MenuItem.h"
class in:public MenuItem
{
public:
	in():MenuItem("增加学生"){};
	bool act()
	{
		studentshouse.in();
	    return false;
	}
};
#endif