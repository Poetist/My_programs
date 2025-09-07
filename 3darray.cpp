#include<iostream>
using namespace std;
int main()
{
	int a[2][3][4];
	int i,j,k;
	cout<<"Enter the elements of array:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<5;k++)
			{
				cin>>a[i][j][k];
			}
		}
	}
	cout<<"\nElements are:\n"<<endl;
	for(i=0;i<2;i++)
	{
		 cout << "Matrix block " << i + 1 << ":\n";
		
		for(j=0;j<3;j++)
		{
			for(k=0;k<4;k++)
			{
				cout<<a[i][j][k]<<"\t";
			}
			cout<<"\t";
		}
	}
	cout<<endl;
	
}
