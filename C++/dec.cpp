#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[10],q,r,n,i,j;
	
	
	cout<<"\n Enter a decimal number:";
	cin>>n;
	
	for(i=0;q!=0;i++)
	{
		q=n/2;
		r=n%2;
		n=q;
		a[i]=r;
		
	}
	
	cout<<"\n";
	for(j=i-1;j>=0;j--)
	{
	
	cout<<"\t"<<a[j];
    }
   	getch();
	return 0;
}
