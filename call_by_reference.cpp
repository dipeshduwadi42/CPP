#include<iostream>
using namespace std;
void changevalue(int *p)
{
	*p=*p+10;
	cout<<"Pointer value"<<*p<<endl;
}
int main()
{
	int num;
	cout<<"Enter value ";
	cin>>num;
	cout<<"Original value "<<num<<endl;
	changevalue(&num);
	return 0;
}
