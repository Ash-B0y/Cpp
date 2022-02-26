#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,s;
	cout<<"\n Enter the number of lines:";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		s=n-i;
		cout<<"\n";
		for(int j=0;j<n;j++)
		{
			
			if(i>0)
			 s=n-i;	
			if(j>=s)
			cout<<"#";
			else
			cout<<"*";
			
		}
	} 
}
