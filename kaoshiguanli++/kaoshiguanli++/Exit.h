#ifndef EXIT_H
#define EXIT_H
#pragma once
#include <iostream>
#include "StudentsHouse.h"
#include "MenuItem.h"
class Exit:public MenuItem
{
public:
	Exit():MenuItem("�˳�����"){};
	bool act()
	{
		cout<<"�˳��ɹ�"<<endl;
	    return true;
	}
};
#endif