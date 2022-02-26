#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

 int n,p[5],n1[5],n2[5],n3[5],av1[5],av2[5],av3[5],alla[5],allb[5],allc[5],max1[5],max2[5],max3[5],j=0,count=0,pc[5];
cout<<"\n Enter the number of processes:";
cin>>n;
for(int i=0;i<n;i++)
 {
 	pc[i]=0;
}
cout<<"\n Enter the number of resources that is readily available:";
for(int i=0;i<1;i++)
{
 cin>>av1[i]>>av2[i]>>av3[i];
}
cout<<"\n Enter the number of allocated resources and the maximum number of resources needed for each process:";
for(int i=0;i<n;i++)
{
 cin>>alla[i]>>allb[i]>>allc[i];
 cin>>max1[i]>>max2[i]>>max3[i];
 p[i]=i;
}

for(int i=0;i<n;i++)
{
 n1[i]=max1[i]-alla[i];
 n2[i]=max2[i]-allb[i];
 n3[i]=max3[i]-allc[i];
 }
cout<<"\n PROCESS \tALLOCATION \tMAX \tNEED";
for(int i=0;i<n;i++)
{
 cout<<"\n P"<<p[i]<<"\t\t"<<alla[i]<<allb[i]<<allc[i]<<"\t\t"<<max1[i]<<max2[i]<<max3[i]<<"\t"<<n1[i]<<n2[i]<<n3[i];
}

cout<<"\n ORDER OF EXECUTION:";
for(int i=0;i<2*n;i++)
{
 if(n1[i]<=av1[j]&&n2[i]<=av2[j]&&n3[i]<=av3[j]&&pc[i]==0)
{
 av1[j]=alla[i]+av1[j];
 av2[j]=allb[i]+av2[j];
 av3[j]=allc[i]+av3[j];
 pc[i]=1;
 cout<<"\n P"<<p[i]<<" is in a safe state";
 }
 else if(i==n)
 {
 	i=0;
  }
}

getch();
return 0;
}

