#ifndef INSTUDENTSHOUSE_H
#define INSTUDENTSHOUDE_H
#pragma once
#include "StudentsHouse.h"
#include "MenuItem.h"
class in:public MenuItem
{
public:
	in():MenuItem("����ѧ��"){};
	bool act()
	{
		studentshouse.in();
	    return false;
	}
};
#endif