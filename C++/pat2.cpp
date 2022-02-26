#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,space;
	cout<<"\n Enter the number of lines:";
	cin>>n;
	space=n-1;
	for(int i=0;i<n;i++)
	{
		
		
		for(int j=0;j<n;j++)
		{
			
				
			if(j>=space)
			cout<<"#";
			else
			cout<<"*";
			
		}
		space--;
		cout<<"\n";
	} 
}
