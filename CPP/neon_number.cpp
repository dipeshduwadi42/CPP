#include<iostream>
using namespace std;
int main()
{
	int num,square,sum=0,rem;
	
	cout<<"Enter a number:";
	cin>>num;
	
	square=num*num;
	
	while(square!=0)
	{
		rem=square%10;
		sum=sum+rem;#include<iostream>
using namespace std;
int main()
{
	int num,square,sum=0,rem;
	
	cout<<"Enter a number:";
	cin>>num;
	
	square=num*num;
	
	while(square!=0)
	{
		rem=square%10;
		sum=sum+rem;
		square=square/10;
	}
	
	if(sum==num)
	{
		cout<<num<<" is a Neon Number";
	}
	else
	{
		cout<<num<<" is not a Neon Number";
	}
	
	return 0;
}
		square=square/10;
	}
	
	if(sum==num)
	{
		cout<<num<<" is a Neon Number";
	}
	else
	{
		cout<<num<<" is not a Neon Number";
	}
	
	return 0;
}
