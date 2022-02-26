#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	char ch[40];
	int a[40],n,b=0,sum=0;
	cout<<"\n Enter the binary number : ";
	cin>>ch;
	n=strlen(ch);
	for(int i=0;i<n;i++)
	a[i]=ch[i]-'0';
	cout<<"\n The corresponding decimal number is : ";
	for(int i=n-1;i>=0;i--)
	{
	
	a[i]=a[i]*pow(2,b);
	b++;
	sum=sum+a[i];
}
cout<<sum;
getch();
return 0;
	
	
}
