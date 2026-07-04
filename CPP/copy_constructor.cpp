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
	sample s1(20,30);
	sample s2= sample(50,60);
	s1.display();
	s2.display();
	return 0;
}

