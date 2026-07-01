#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(i=4;i>=1;i--)
	{
		for(k=5;k>i;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
