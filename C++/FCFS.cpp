#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int pr[5],w[5],a[5],b[5],t[5],temp,tmp,tp,x=0;
	float aw,at,s1,s2,n;
	cout<<"\n Enter the number of processes:";
	cin>>n;
	cout<<"\n Enter the arrival & burst time of the processes:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
		pr[i]=i;
		
	}
	cout<<"\n\t\t BEFORE EXECUTION";
	cout<<"\n";
	cout<<"\n PROCESSES \tARRIVAL TIME \tBURST TIME";
	cout<<"\n";
	for(int j=0;j<n;j++)
	{
	 cout<<"\n P"<<pr[j]<<"\t\t"<<a[j]<<"\t\t"<<b[j];	
	}
	
	for(int k=0;k<n;k++)
	{
	for(int l=k+1;l<n;l++)
	{
		if(a[l]<a[k])
		{
			temp=a[k];
			a[k]=a[l];
			a[l]=temp;
			tmp=b[k];
			b[k]=b[l];
			b[l]=tmp;
			tp=pr[k];
			pr[k]=pr[l];
			pr[l]=tp;
	    }
    }
  }
  cout<<"\n\n\t\t AFTER EXECUTION";
  cout<<"\n";
  cout<<"\n PROCESSES \tARRIVAL TIME \tBURST TIME";
  cout<<"\n";
	for(int m=0;m<n;m++)
	{
	 cout<<"\n P"<<pr[m]<<"\t\t"<<a[m]<<"\t\t"<<b[m];	
	}
 	
   for(int s=0;s<n;s++)
   {
   	if(a[s]==0)
   	{
   		w[s]=0;
   		t[s]=w[s]+b[s];
   	}
   	else
   	{
   	 x+=b[s-1];
   	 w[s]=x-a[s];
   	 t[s]=w[s]+b[s];
   }
 }
   cout<<"\n";
   cout<<"\n WAITING TIME \t TURN AROUND TIME";
   cout<<"\n";
   for(int r=0;r<n;r++)
	{
	 cout<<"\n\t"<<w[r]<<"\t\t"<<t[r];	
	}
   for(int c=0;c<n;c++)
   {
   	s1+=w[c];
   	s2+=t[c];
   }
   aw=s1/n;
   at=s2/n;
   cout<<"\n\n AVERAGE WAITING TIME= "<<aw;
   cout<<"\n\n AVERAGE TURN AROUND TIME= "<<at;
   
	getch;
	return 0;
	
}
