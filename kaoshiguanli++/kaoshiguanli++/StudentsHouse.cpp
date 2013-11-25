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
	cout<<"----------ѧ����----------"<<endl;
	cout<<"ѧ��\t"<<"����\t"<<"�ɼ�"<<endl;
	for(int i=0; i<this->students.size(); i++)
	{
        cout<<this->students[i]->GetModel()<<"\t"<<this->students[i]->GetName()<<"\t"<<this->students[i]->GetMark()<<endl;
    }
	cout<<"----------ѧ����----------"<<endl;
}
void  StudentsHouse::in()
{
	student* temp = new student;
    temp->input();
    for(auto &item : students)
	{
	if(item->GetModel()==temp->GetModel()||item->GetName()==temp->GetName())
    {
	   cout<<"��ѧ������/ѧ���Ѵ���"<<endl;
	   delete temp;
	   return ;
    }
	}
       this->students.push_back(temp);
	   cout<<"����ѧ���ɹ�"<<endl;
}
void StudentsHouse::out()
{
    student* temp = new student;
    temp->input();
    student* result = this->find(temp);
    if(result ==NULL)
	{
        cout<<"��ѧ������/ѧ�Ų����ڣ�"<<endl;
    }
	else
	{
		for (int i=0;i<this->students.size(); i++)
        {
			if (this->students[i]->GetModel()==temp->GetModel()&&this->students[i]->GetName()==temp->GetName())
        {
            students.erase(students.begin()+i);
			cout<<"ɾ��ѧ���ɹ�"<<endl;
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
       cout<<"��ѧ������/ѧ�Ų����ڣ�"<<endl;
    }
	else
	{
		result->SetMark();
		cout<<"¼��ɼ��ɹ�"<<endl;
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