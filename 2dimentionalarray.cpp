#include<iostream>
using namespace std;
int main()
{
	int a[2][3];
	int i,j;
	cout<<"Enter the elements of array:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>> a[i][j];
		}
	}
	cout<<"Elements of array:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<< a[i][j] <<"\t";
		}
		cout<<endl;
	}
	return 0;
}
