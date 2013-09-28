#include <iostream>
using namespace std;
int modecout;
	struct Student
	{
		char mode[20];
		char name[10];
		int mark[60];
	};
	Student students[500];
int find(char mode[20])
{
	int i;
	for(i=0;i<modecout;i++)
	{
		if(strcmp(students[i].mode,mode)==0)
               break;
	}
	return i;
}
void list(int k,char kemu[60][10])
{
	int i;
	if(modecout==0){cout<<"没有学生记录"<<endl;}
	else
	{
	cout<<"学号\t"<<"姓名\t";
	    for(i=0;i<k;i++)
		{
			if(i==(k-1))
			{
				cout<<kemu[i]<<endl;
			}
			else
			{
				cout<<kemu[i]<<"\t";
			}
		}

		for(i=0;i<modecout;i++)
		{
			cout<<students[i].mode<<"\t";
			cout<<students[i].name<<"\t";
            for(int j=0;j<k;j++)
			{
				if(j==(k-1))
				{
					cout<<students[i].mark[j]<<endl;
				}
				else
				{
					cout<<students[i].mark[j]<<"\t";
				}
			}
		}
	}
}
void choose()
{
	int i;
	Student student1;
	cout<<"学号：";cin>>student1.mode;
	cout<<"姓名：";cin>>student1.name;
	i=find(student1.mode);
	if(i==modecout)
	{
		for (int j= 0;j< 10;j++)
		{
			students[i].mode[j]=student1.mode[j];
		    students[i].name[j]=student1.name[j];
		}
	}
	else
	{
		cout<<"此学生已存在"<<endl;
		modecout--;
	}
	modecout++;
}
void drop()
{
	int i
    ;
	Student student2;
	cout<<"学号:";cin>>student2.mode;
	i=find(student2.mode);
	if (i==modecout)
	{
		cout<<"此学生不存在"<<endl;
	}
	else
	{
		for(i=find(student2.mode);i<(modecout-1);i++)
		{
            for(int j=0;j<60;j++)
			{
            students[i].mode[j]=students[i+1].mode[j];
            students[i].name[j]=students[i+1].name[j];
            students[i].mark[j]=students[i+1].mark[j];
            }
         }
         modecout--;
	}

}
void luru(int k,char kemu[60][10],int h,int g)
{   char mode1[20];
	int l,i;
	if(h==0)
	{
    cout<<"请输入一个学号:";cin>>mode1;
	g=find(mode1);
	  if(g==modecout)
	  {
		cout<<"此学生不存在"<<endl;
	  }
	}
	if(g!=modecout)
	{
	cout<<"请输入各科成绩"<<endl;
	for(int j=0;j<k;j++)
	{
		cout<<kemu[j]<<":";cin>>students[g].mark[j];
	}
	cout<<"是否继续进行，是则输入1，否则输入0"<<endl;cin>>l;
    if(l==1)
	{
		g++;h++;
		luru(k,kemu, h,g);
	}
	else if(l!=0)
	{
		cout<<"您输入了个不正确的数字"<<endl;
	}
	}
	else 
	{
		if(h!=0)
		{cout<<"到尾了，没有学生了"<<endl;}
	}
}
int main()
{
	int k;
	modecout=0;
	char kemu[60][10];
	cout<<"此程序用来记录学生考试，请输入您所需要记录的课程数和具体课程"<<endl;
	cout<<"课程数:";cin>>k;
	for (int u=0;u<k;u++)
	{
		cout<<"课程名:";cin>>kemu[u];
	}

	cout<<"1)查看学生名单"<<endl;
	cout<<"2)选课"<<endl;
	cout<<"3)退选"<<endl;
	cout<<"4)录入成绩"<<endl;
	cout<<"5)退出程序"<<endl;
	do
	{
		int n;
		cin>>n;
		switch(n)
		{
			case 1:
				list(k,kemu);
				break;
			case 2:
				choose();
				break;
			case 3:
				drop();
				break;
			case 4:
				luru(k,kemu,0,0);
				break;
			case 5:
				exit(0);
            default:
                 cout<<"您输入个错误的数字"<<endl;
		}
	}while(1); 
}