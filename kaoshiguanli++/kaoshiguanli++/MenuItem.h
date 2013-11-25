#ifndef MENUITEM_H
#define MENUITEM_H
#pragma once
#include <string>
using std::string;
class MenuItem
{
public:
	MenuItem(string a):caption(a){};
	~MenuItem(){};
	string getCaption(){
        return caption;
    }
    virtual bool act() = 0;
private:
	string caption;
};
#endif