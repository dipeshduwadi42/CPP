#include<iostream>
using namespace std;
class sample
{
public:
int x,y;
sample(int a,int b)
{
	x=a;
	y=b;
}
void display()
{
	cout<<"x= "<<x<<"\ny= "<<y<<endl;
	
}
	
};
int main()
{
	sample obj1(10,20);
	sample obj2(30,40);
	obj1.display();
	obj2.display();
	return 0;
}

