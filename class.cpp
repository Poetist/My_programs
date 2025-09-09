#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		string name;
		void disp()
		{
			cout<<"roll number= "<<rollno<<endl<<"Name= "<<name;
		}
};
int main()
{
	student s1;
	s1.rollno=1;
	s1.name="Shubhada";
	s1.disp();
	return 0;
}
