#include<iostream>
using namespace std;
class student
{
	public:
	string name;
	int age;
	
	void display()
	{
		cout<<"Name is "<<name<<endl;
		cout<<"Age is "<<age<<endl;
	}
};
int main()
{
	student s;
	s.name="John";
	s.age=30;
	s.display();
	return 0;
}

