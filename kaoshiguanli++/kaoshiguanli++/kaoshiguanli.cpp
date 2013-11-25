#include "kaoshiguanli.h"
#include "list.h"
#include "InStudentsHouse.h"
#include "OutStudentsHouse.h"
#include "luru.h"
#include "Exit.h"
#include <iostream>
using namespace std;
kaoshiguanli::kaoshiguanli(){
    menu.append(new list());
    menu.append(new in());
    menu.append(new out());
	menu.append(new luru());
    menu.append(new Exit());
}

int kaoshiguanli::run(){
    return menu.run();
}