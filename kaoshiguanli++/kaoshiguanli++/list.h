#ifndef LIST_H
#define LIST_H
#pragma once
#include "MenuItem.h"
#include "StudentsHouse.h"
class list:public MenuItem
{
public:
	list():MenuItem("�鿴����ѧ���ɼ�"){};
	bool act()
	{
		studentshouse.list();
	    return false;
	}
};
#endif