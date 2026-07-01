#include<iostream>
using namespace std;
class student
{
	public:
	string name;
	int age;
};
int main()
{
	student s;
	s.name="Ram";
	s.age=30;
	cout<<"Name is"<<s.name<<endl;
	cout<<"Age is"<<s.age<<endl;
	return 0;
}

