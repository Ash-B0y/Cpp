#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int a[10],b[10],n,i,j,q,sum=0;
	
	
	cout<<"\n Enter the size of the binary number:";
	cin>>n;
	cout<<"\n Enter the binary number:";
	
	for(i=0;i<n;i++)
	    {
		cin>>a[i];
	      }
		j=0;
		
	for(i=n-1;i>=0;i--)
	{
	 q=a[i]*pow(2,j);
	 b[j]=q;
	 j++;	
	}
	for(j=0;j<n;j++)
	{
	sum+=b[j];	
	}
	
	cout<<"\n The corresponding decimal number is:"<<sum;
	getch();
	return 0;
}
