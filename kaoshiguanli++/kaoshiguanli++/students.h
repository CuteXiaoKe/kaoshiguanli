#ifndef STUDENTS_H
#define STUDENTS_H
#pragma once
#include <string>
#include <iostream>
using namespace std;
class student
{
public:
	student(){this->mark=0;}
	void SetModel(string a){this->model=a;}
	string GetModel(){return this->model;}
	string GetName(){return this->name;}
	void SetName(string b){this->name=b;}
	int GetMark(){return this->mark;}
	bool equal(student* other)
	{
		return this->model == other->model||this->name==other->name;
    }
	void input()
	{ 
	cout<<"学号：";
    cin>>this->model;
    cout<<"姓名：";
    cin>>this->name;
	}
	void SetMark()
	{
	 cout<<"成绩：";
	 cin>>this->mark;
	 while(cin.fail())
	 {
	   cin.clear();
	   cin.sync();
	 }
	 if(this->mark<0||this->mark>100)
	 {
	 cout<<"您输入的成绩太小或太大,请重新输入"<<endl;
	 SetMark();
	 }
	}
private:
	string model;
	string name;
	int mark;
};
#endif