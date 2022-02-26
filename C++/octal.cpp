#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int f[10],n,q,r,i,j; 
	cout<<"\n Enter a decimal number:";
	cin>>n;
	
	for(i=0;q!=0;i++)
	{
		q=n/8;
		r=n%8;
		n=q;
		f[i]=r;
		
	}
	cout<<"\n";
	
	for(j=i-1;j>=0;j--)
	{
	cout<<"\t"<<f[j];
   }
   getch();
   return 0;
}

