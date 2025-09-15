#include<iostream>
using namespace std;
class add
{
	private:
		int a,b;
	public:
		void input()
		{
			cout<<"Enter the values of a and b";
			cin>>a>>b;
		}
		void add1()
		{
			cout<<"Addition is "<<a+b;
		}
};
int main()
{
	add a1;
	a1.input();
	a1.add1();
	return 0;
}
