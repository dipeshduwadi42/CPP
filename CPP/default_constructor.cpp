#include<iostream>
using namespace std;
class sample
{
public:
int x,y;
sample()
{
	x=30;
	y=10;
}
void display()
{
	cout<<"x= "<<x<<"\ny= "<<y<<endl;
	
}
	
};
int main()
{
	sample obj1,obj2;
	obj1.display();
	obj2.display();
	return 0;
}
