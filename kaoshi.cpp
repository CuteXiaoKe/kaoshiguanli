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
	if(modecout==0){cout<<"û��ѧ����¼"<<endl;}
	else
	{
	cout<<"ѧ��\t"<<"����\t";
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
	cout<<"ѧ�ţ�";cin>>student1.mode;
	cout<<"������";cin>>student1.name;
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
		cout<<"��ѧ���Ѵ���"<<endl;
		modecout--;
	}
	modecout++;
}
void drop()
{
	int i
    ;
	Student student2;
	cout<<"ѧ��:";cin>>student2.mode;
	i=find(student2.mode);
	if (i==modecout)
	{
		cout<<"��ѧ��������"<<endl;
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
    cout<<"������һ��ѧ��:";cin>>mode1;
	g=find(mode1);
	  if(g==modecout)
	  {
		cout<<"��ѧ��������"<<endl;
	  }
	}
	if(g!=modecout)
	{
	cout<<"��������Ƴɼ�"<<endl;
	for(int j=0;j<k;j++)
	{
		cout<<kemu[j]<<":";cin>>students[g].mark[j];
	}
	cout<<"�Ƿ�������У���������1����������0"<<endl;cin>>l;
    if(l==1)
	{
		g++;h++;
		luru(k,kemu, h,g);
	}
	else if(l!=0)
	{
		cout<<"�������˸�����ȷ������"<<endl;
	}
	}
	else 
	{
		if(h!=0)
		{cout<<"��β�ˣ�û��ѧ����"<<endl;}
	}
}
int main()
{
	int k;
	modecout=0;
	char kemu[60][10];
	cout<<"�˳���������¼ѧ�����ԣ�������������Ҫ��¼�Ŀγ����;���γ�"<<endl;
	cout<<"�γ���:";cin>>k;
	for (int u=0;u<k;u++)
	{
		cout<<"�γ���:";cin>>kemu[u];
	}

	cout<<"1)�鿴ѧ������"<<endl;
	cout<<"2)ѡ��"<<endl;
	cout<<"3)��ѡ"<<endl;
	cout<<"4)¼��ɼ�"<<endl;
	cout<<"5)�˳�����"<<endl;
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
                 cout<<"����������������"<<endl;
		}
	}while(1); 
}