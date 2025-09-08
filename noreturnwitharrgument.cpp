#include<iostream>
using namespace std;
int sub()
{
	int a,b;
	cout<<"Enter the values of a and b";
	cin>>a>>b;
	return a-b;
}
int main()
{
	cout<<"Substraction "<<sub();
	return 0;
}
