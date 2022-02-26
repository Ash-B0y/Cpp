#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char a[20]={'G','e','e','k','s','f','o','r','G','e','e','k','s'};
int x=0,m=12;
for(int i=0;i<13;i++)
{
	cout<<"\n";
	for(int j=0;j<13;j++)
	{
		if(j==x)
		cout<<a[x];
		else if(j==m)
		cout<<a[m];
		else
		cout<<" ";
	}
	x++;
	m--;
}
}
