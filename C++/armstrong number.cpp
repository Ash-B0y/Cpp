#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int a,n,no,b,q,r,s,count=0,i,sum=0,p;	
	cout<<"\n Enter a number to be checked:";
    cin>>n;
    a=n;
    b=n;
    
    while(q!=0)
    {
    	q=n/10;
    	n=q;
    	count++;
    }
    cout<<"\n The number of digits present in the given number="<<count;
    
    while(s!=0)
    {
     s=a/10;
	 r=a%10;
	 p=pow(r,count);
	 sum+=p;
     a=s;	
  }
 cout<<"\n Original input="<<b;
 cout<<"\n Modified input="<<sum;
if(sum==b)
cout<<"\n The given number is an armstrong number";
else
cout<<"\n The given number is not an armstrong number";
getch();
return 0;	 	
}
    
