#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,space,m,d=0,y=0;
	cout<<"\n Enter the number of lines:";
	cin>>n;
	m=(n*2)-1;
	space=m-1;
	y=m+d;
	for(int i=1;i<=m;i++)
	{
		if(i%2==1)
		cout<<"\n";
		for(int j=0;j<y;j++)
		{
			if(i%2==1)
			{
			if(j>=space)
			cout<<"#";
			else
			cout<<" ";
	       }
	       else
	       break;
	       
		}
		if(i%2==1)
		{
		space--;
		d++;
		y=m+d;
	} 
}
}
