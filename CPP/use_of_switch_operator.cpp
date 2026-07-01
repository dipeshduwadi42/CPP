#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char op;
	cout<<"Enter the number";
	cin>>num1>>num2;
	cout<<"Enter the operator";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"sum is"<<num1+num2;
			break;
		case '-':
			cout<<"Difference is"<<num1-num2;
			break;
		case '*':
			cout<<"Multiplication is"<<num1*num2;
			break;
		case '/':
			if(num2!=0)
			cout<<"Division is"<<num1/num2;
			else
			cout<<"Division is not possible";
			break;
		default:
			cout<<"Invalid choice";
	}
	return 0;
}
