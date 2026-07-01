#include<iostream>
using namespace std;
int main()
{
	float num,sum=0,average;
	int n;
	cout<<"Enter the numbers";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		sum=sum+num;
	}
	cout<<"The sum is"<<sum<<endl;
	cout<<"The average is"<<sum/n;
	return 0;
	
}
