#include <iostream>
using namespace std;
class ao
{
	private:
		int a,b,add,sub,mult,div;
	public:
		void input()
		{
		cout<<"Enter the values of a and b"; 
		cin>>a>>b;
		}
		void add1()
		{
			cout<<"Addition is "<<a+b<<endl;
		}
		void sub1()
		{
			cout<<"substraction is "<<a-b<<endl; 
		}
		void mult1()
		{
			cout<<"Multiplication is "<<a*b<<endl; 
		}
		void div1()
		{
			cout<<"Division is "<<a/b; 
		}
};
int main()
{
	ao a1;
	a1.input();
	a1.add1();
	a1.sub1();
	a1.mult1();
	a1.div1();
	return 0;
}

