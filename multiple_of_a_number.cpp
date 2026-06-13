#include<iostream>
using namespace std;
int main()
{
	int num,i,n;
	cout<<"Enter the number";
	cin>>num;
	cout<<"Enter the range for multiplication table";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cout<<"The multiple of"<<num<<"x"<<i<<"is"<<num*i<<endl;
	}
	return 0;
}
