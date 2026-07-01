#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="Hello World";
	int i,j;
	for(i=0;i<str.length();i++)
	{
		int count=0;
		for(j=0;j<str.length();j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		cout<<str[i]<<"="<<count<<endl;
    }
return 0;
}
