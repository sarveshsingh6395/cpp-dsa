#include<iostream>
#include<conio.h>
#define size 2
using namespace std;

class student {
	int roll[size];
	char name[size][20];
	public:
		void getdata(void);
		void display(void);
};
void student :: getdata(void)
{
	for(int i =0 ; i<size ; i++)
	{
		cout<<"name : "<<endl;
		cin>>name[i];
		cout<<"roll : "<<endl;
		cin>>roll[i];
	}
}
void student :: display(void)
{
	for(int i=0 ; i<size; i++)
	{
		cout<<"name:" << name[i] <<endl;
		cout<<"roll:" << roll[i] <<endl;
		getch ();
	}
}
int main() {
	student stu;
	stu.getdata();
	stu.display();
	return 0;
}

