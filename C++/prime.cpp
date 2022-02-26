#include<iostream>
#include<conio.h>
using namespace std;

class prime
{
	public:
		
		int a,i;
		
		void check(int n)
		{
			a=n;
			for(i=2;i<n-1;i++)
{
if(n%i==0)
break;
}
 if(i==n-1)
cout<<"\n The given number is a prime number";
else
cout<<"\n The given number is not a prime number";


		}
};

int main()
{
    prime p;
	int b;	
	cout<<"\n Enter a number:";
    cin>>b;
    p.check(b);
    getch();
    return 0;
}


