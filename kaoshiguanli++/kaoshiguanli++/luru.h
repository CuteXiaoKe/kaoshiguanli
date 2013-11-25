#ifndef LURU_H
#define LURU_H
#pragma once
#include "StudentsHouse.h"
#include "MenuItem.h"
class luru:public MenuItem
{
public:
	luru():MenuItem("Â¼Èë³É¼¨"){};
	bool act()
	{
		studentshouse.luru();
	    return false;
	}
};

#endif