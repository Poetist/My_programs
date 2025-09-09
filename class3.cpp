#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		string name;
		void input()
		{
			cout<<"Enter your age and name";
			cin>>age>>name;
		}
		void disp()
		{
			cout<<"Age= "<<age<<endl<<"name ="<<name;
		}
};
int main()
{
	person p1;
	p1.input();
	p1.disp();
	return 0;
}
