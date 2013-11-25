#include "StudentsHouse.h"
#include <iostream>
using namespace std;
StudentsHouse studentshouse;
StudentsHouse::~StudentsHouse(){
    for(auto &student:students){
        delete student;
    }
}
void StudentsHouse::list()
{
	cout<<"----------学生库----------"<<endl;
	cout<<"学号\t"<<"姓名\t"<<"成绩"<<endl;
	for(int i=0; i<this->students.size(); i++)
	{
        cout<<this->students[i]->GetModel()<<"\t"<<this->students[i]->GetName()<<"\t"<<this->students[i]->GetMark()<<endl;
    }
	cout<<"----------学生库----------"<<endl;
}
void  StudentsHouse::in()
{
	student* temp = new student;
    temp->input();
    for(auto &item : students)
	{
	if(item->GetModel()==temp->GetModel()||item->GetName()==temp->GetName())
    {
	   cout<<"此学生姓名/学号已存在"<<endl;
	   delete temp;
	   return ;
    }
	}
       this->students.push_back(temp);
	   cout<<"加入学生成功"<<endl;
}
void StudentsHouse::out()
{
    student* temp = new student;
    temp->input();
    student* result = this->find(temp);
    if(result ==NULL)
	{
        cout<<"此学生姓名/学号不存在！"<<endl;
    }
	else
	{
		for (int i=0;i<this->students.size(); i++)
        {
			if (this->students[i]->GetModel()==temp->GetModel()&&this->students[i]->GetName()==temp->GetName())
        {
            students.erase(students.begin()+i);
			cout<<"删除学生成功"<<endl;
        }
    }
    }
}
void StudentsHouse::luru()
{
	student* temp = new student;
    temp->input();
    student* result = this->find(temp);
    if(result ==NULL)
	{
       cout<<"此学生姓名/学号不存在！"<<endl;
    }
	else
	{
		result->SetMark();
		cout<<"录入成绩成功"<<endl;
	}
}
student* StudentsHouse::find(student* a)
{
	  for(auto &item : students){
		  if(item->GetModel()==a->GetModel()&&item->GetName()==a->GetName())
		  {
			  return item;
          }
        }
        return NULL;
}