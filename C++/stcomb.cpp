#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	char a[10];
	int x,temp;
	cout<<"\n Enter a string:";
	cin>>a;
	x=strlen(a);
	
	for(int i=0;i<x;i++)
	{
		if(i==(x-1))
		{
			temp=a[0];
			a[0]=a[i];
			a[i]=temp;
			cout<<"\n\t"<<a;
		}
		else
		{
		
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		cout<<"\n\t"<<a;
      }
	}
	
	for(int j=0;j<1;j++)
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		cout<<"\n\t"<<a;
		temp=a[j+1];
		a[j+1]=a[j+2];
		a[j+2]=temp;
		cout<<"\n\t"<<a;
	}
	getch();
	return 0;
}
