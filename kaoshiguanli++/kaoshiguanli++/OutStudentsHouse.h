#ifndef OUTSTUDENTSHOUSE_H
#define OUTSTUDENTSHOUDE_H
#pragma once
#include "StudentsHouse.h"
#include "MenuItem.h"
class out:public MenuItem
{
public:
	out():MenuItem("É¾³ýÑ§Éú"){};
	bool act()
	{
		studentshouse.out();
	    return false;
	}
};
#endif