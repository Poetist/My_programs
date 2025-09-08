#include<iostream>
using namespace std;
void sub(int a,int b)
{
	cout<<"Substraction"<<a-b;
}
int main()
{
	int a,b;
	cout<<"enter the values of a and b";
	cin>>a>>b;
	sub(a,b);
	return 0;
}
