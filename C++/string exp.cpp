#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()

{
	char a[10];
	int i,j,x,size;
	cout<<"\n Enter a string:";
	cin>>a;
	
	x=strlen(a);
	for(i=0;i<x;i=i+2)
	{
		size=a[i]-'0';
		cout<<"\n";
		for(j=0;j<size;j++)
		{
		
		cout<<"\t"<<a[i+1];
	   }
	}
	getch();
	return 0;
	
}
