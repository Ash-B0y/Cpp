#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a[10],i,n,j;
	
	cout<<"\n Enter the number of elements:";
	cin>>n;
	cout<<"\n Enter the data elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	 for(i=0;i<n;i++)
	 {
	  if(a[i]==0)
	  {
	  	int temp=a[i];
	  	for(j=i;j<n-1;j++)
	  	{
	  	
	  	a[j]=a[j+1];
	  }
	  a[n-1]=temp;
	  }
	 }
	cout<<"\n The array elements are :";
	for(int i=0;i<n;i++)
	{
	 cout<<"\n\t"<<a[i];
	}
	getch();
	return 0;
}
