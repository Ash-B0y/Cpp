#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	char s[10][10],t[50];
	int j,n;
	cout<<"\n Enter the number of strings you want to sort:";
	cin>>n;
	cout<<"\n Enter the strings:";
	for(int i=0;i<n;i++)
	{
		cin>>s[i];	
	}
	
	for(int i=1;i<n;i++)
	{
	 for(j=1;j<n;j++)
	 {
	  if(strcmp(s[j-1],s[j])>0)
	  {
	  	strcpy(t,s[j-1]);
	  	strcpy(s[j-1],s[j]);
	  	strcpy(s[j],t);
	  }
	   }
	}
	
	cout<<"\n The strings in sorted order is:";
	for(int i=0;i<n;i++)
	{
	 cout<<"\n\t"<<s[i];
	}

	return 0;
}
