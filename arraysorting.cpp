#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int i,j;
	cout<<"Enter the elements:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
	for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}	
		}
	}
		cout<<"Array elements are:";
		for(i=0;i<5;i++)
		{
			cout<<a[i]<<"\t";
		}
		return 0;
}
