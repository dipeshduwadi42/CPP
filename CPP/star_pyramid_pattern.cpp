#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		{
			cout<<" ";//to give spaces
		}
		for(j=1;j<=i;j++)
		{
			cout<<" *";//to print star
		}
			cout<<endl;
	}
	return 0;
}
