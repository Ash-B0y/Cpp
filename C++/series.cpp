#include<iostream>
#include<conio.h>
using namespace std;

 int main()
 {
 	int f=1,i,j,n;
 	float sum=1.00,x;
 	cout<<"\n Enter the number of terms:";
 	cin>>n;
 	for(i=2;i<n;i++)
 	{
 		for(j=i;j>=i-1;j--)
 		{
 			f=f*j;
 		}
 		x=1.00/f;
 		sum+=x;
 	}
 	cout<<"\n EXPANSION SERIES:"<<sum;
 	getch();
 	return 0;
 }
