#include<iostream>
#include<conio.h>
using namespace std;

class company{
	int id;
	char name[20];
	char dep[20];
	
	public:
		void getdata(void);
		void display(void);
};
void company ::  getdata(void)
{
	cout<<"Enter the name : ";
	cin>>name;
	cout<<"Enter the id : ";
	cin>>id;
	cout<<"Enter the department : ";
	cin>>dep;
}
void company :: display(void)
{
	cout<<"Name : " << name << endl;
	cout<<"Id : " << id << endl;
	cout<<"department : " << dep << endl;
	cout<<"Press enter for further details...."<<endl;
	getch ();
}
int main()
{
	company manager[1], workers[2];
	for(int i=0; i<1; i++)
	{
		cout<<"Enter the detail of manager --> "<< " "<< i+1 <<endl;
		manager[i].getdata();
	}
	for(int i=0;i<2; i++)
	{
		cout<<"Detail of worker -->"<<" "<< i+1 << endl;
		workers[i].getdata();
	}
	cout<<endl
	;
	for(int i=0;i<1;i++)
	{
		cout<<"Detail of manager -->" << " " << i+1 << endl;
		manager[i].display();
	}
	for(int i=0;i<2;i++)
	{
		cout<<"Detail of worker -->"<< " " << i+1 << endl;
		workers[i].display();
	}
	return 0;
}
