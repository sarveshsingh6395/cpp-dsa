#include<iostream>
using namespace std;
class sum{
	int a,b;
		friend int add(void);
};
int add(void)
{
	sum s;
	int num;
	s.a =9;
	s.b =8;
	num = s.a + s.b;
	return num;
}
int main()
{
	int result;
	result = add();
	cout<<"Additon : "<<" "<<result<<endl;
	return 0;
}
