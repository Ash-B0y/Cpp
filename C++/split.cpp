#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int a,n,q=999,cj=0,b[100],c[100],idx=0,tr=0,rem,cx=0,sum=0,alt=999,z=0;
	cout<<"Enter a number which has atleast 3 digits:";
	cin>>a;
	cout<<"The different values available by splitting are:"<<"\n";
	n=a;
  while(q!=0)
    {
    	q=n/10;
    	rem=n%10;
    	b[cj]=rem;
    	n=q;
    	cj++;
    	
    }
    cx=cj-2;
    tr=pow(10,cx);
    cx=tr;
    alt=(cj-2);
       while(tr!=1)
    {
    
    for(int x=cj-1;x>=alt;x--)
    {
    	for(int s=x;s>=x-alt;s--)
    	{
    	sum+=(b[s]*cx);
		cx=cx/10;	
    	}
    	c[idx]=sum;
    	cout<<c[idx]<<"\n";
    	idx++;
    	cx=tr;
    	sum=0;
    	
    }
    alt--;
    tr=tr/10;
    cx=tr;
}
for(int g=0;g<cj;g++)
cout<<b[g]<<"\n";
    return 0;
}
