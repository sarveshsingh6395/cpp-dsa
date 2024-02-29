#include<iostream>
using namespace std;
class matrix{
	int item[2][3];
	public:
		void getdata(void);
	 	void putdata(void);
	 	void add(matrix, matrix);
};
void matrix :: getdata(void)
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>item[i][j];
		}
	}
}
void matrix :: putdata(void)
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<item[i][j]<<" ";
		}
		cout<<endl;
	}
}
void matrix :: add(matrix x, matrix y)
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			item[i][j] = x.item[i][j] + y.item[i][j];
		}
	}
}
int main() {
	matrix a,b,result;
	cout<<"enter value of a : "<<endl;
	a.getdata();
	cout<<"enter value of b : "<<endl;
	b.getdata();
	cout<<"you entered a : "<<endl;
	a.putdata();
	cout<<"you entered b : "<<endl;
	b.putdata();
	result.add(a,b);
	cout<<"Addition : "<<endl;
	result.putdata();
	
}


