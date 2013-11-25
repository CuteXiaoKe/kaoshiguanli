#ifndef EXIT_H
#define EXIT_H
#pragma once
#include <iostream>
#include "StudentsHouse.h"
#include "MenuItem.h"
class Exit:public MenuItem
{
public:
	Exit():MenuItem("退出程序"){};
	bool act()
	{
		cout<<"退出成功"<<endl;
	    return true;
	}
};
#endif