#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[20],cnt=0,n,x,p,ct=0,as,al;
	cout<<"\n Enter the number of persons to be standing in a circular manner:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	a[i]=0;
	 }
	cout<<"\n Enter the person from whom to start with:";
	while(1)
	{
	cin>>x;
	if(x>n||(x==0))
	{
	cout<<"\t Invalid Input";
	}
	else
	break;
    }
	cout<<"\n Enter the number of passes:";
	cin>>p;
	as=x;
	while(cnt!=(n-1))
	{
	 if(a[as]==0)
	 {
	 ct++;
     }
     
     if(as==n)
	 {
	 if((ct==p+1)&&(a[as]==0))
	 {
	 a[as]=1;
	 ct=0;
	 cnt++;	
	 if(cnt==(n-1))
	 break;
      }
	 as=1;
	 if(a[as]==0)
	 ct++;	
      }
     	
   	if((ct==p+1)&&(a[as]==0))
	 {
	 a[as]=1;
	 ct=0;
	 cnt++;	
	 if(cnt==(n-1))
	 break;
      }
      as++;
  	  	  
	}
	for(int j=1;j<=n;j++)
	{	
	 if(a[j]==0)
	 {
	  al=j;
	  break;	
	 }	
	}
	cout<<"\n The person surviving at last is :"<<al;
	return 0;
}
