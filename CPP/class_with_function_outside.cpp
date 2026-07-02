#include<iostream>
using namespace std;
class student
{
	public:
	int rollno;
	char name[40];
	void getdata();
	void display();
};
void student::getdata()
	{
		cout<<"Enter the name"<<endl;
		cin>>name;
		cout<<"Enter the roll no"<<endl;
		cin>>rollno;
	}
void student::display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Roll no: "<<rollno<<endl;
	}
int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
}
