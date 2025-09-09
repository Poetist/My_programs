#include<iostream>
using namespace std;
class person
{	
	public:
	string name;
	int age;
	void input()
	{
		cout<<"Enter your name and age";
		cin>>name>>age;
	}
	void disp()
	{
		cout<<"name= "<<name<<endl<<"Age= "<<age;
	}
};
int main()
{
	person p1;
	p1.input();
	p1.disp();
	return 0;
}
