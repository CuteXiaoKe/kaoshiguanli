#include "Menu.h"
#include <iostream>
using namespace std;
Menu::~Menu(){
	for(auto &item:items){
        delete item;
    }
}
void Menu::append(MenuItem* mi){
    this->items.push_back(mi);
}
int Menu::run(){
    int index;
    while(1){
        this->show();
        cin>>index;
        if(!cin || index<1 || index>items.size()){
            cout << "����Ĳ˵�����������룺"<<endl;
            if(!cin){
                cin.clear();
                cin.sync();
            }
            continue;
        }
        if(items[index-1]->act()) break;
    }
    return 0;
}
void Menu::show(){
    int i=0;
	cout<<"------------C++�ɼ�����ϵͳ-------------"<<endl;
    for(auto &item:items){
        cout<< ++i <<")" <<item->getCaption() <<endl;
    }
	cout<<"------------C++�ɼ�����ϵͳ-------------"<<endl;
}