#ifndef MENU_H
#define MENU_H
#pragma once
#include <vector>
#include "MenuItem.h"
using std::vector;
class Menu{
public:
    virtual ~Menu();
    void append(MenuItem* mi);
    int run();
private:
    void show();
    vector<MenuItem*> items;
};
#endif