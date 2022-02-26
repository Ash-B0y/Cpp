#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int a,l,r,rem,q=999,b[50],c[50],max=0,n,cj=0,cnt=1,fr[50],idx=0,cou=0,mx=0,idx1=0;	
	cout<<"\n Enter the range:";
    cin>>l>>r;
    for(int bv=l;bv<r;bv++)
    {
    	
    if((bv%3==0)&&(bv%7==0))
    {
    	n=bv;
		q=999;
		  	
    while(q!=0)
    {
    	q=n/10;
    	rem=n%10;
    	if(rem>max)
    	{
    	
    	max=rem;
        }
    	b[cj]=rem;
    	n=q;
    	cj++;
    	
    }
    
   }
   
}
for(int i=0;i<cj;i++)
{

 for(int j=0;j<idx;j++)
 {
 	if(b[i]!=c[j])
 	cou++;
 	
 	
 }
 if(cou==idx)
 {
  for(int g=i+1;g<cj;g++)
  {
  	if(b[g]==b[i])
    cnt++;
  }
 fr[idx]=cnt;
 c[idx]=b[i];
 idx++;
 cnt=1;	
}
cou=0;
}
for(int s=0;s<idx;s++)
{
	if(fr[s]>mx)
	{
	
	mx=fr[s];
	idx1=s;
   }
	
}

if(mx==1)
cout<<max;
else
cout<<c[idx1];
return 0;
}


