#include<iostream>
using namespace std;
int sub(int a,int b)
{
	return a-b;
}
int main()
{
	int a,b;
	cout<<"Enter the values of a and b";
	cin>>a>>b;
	cout<<"Substraction "<<sub(a,b);
	return 0;
}
