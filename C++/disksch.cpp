#include<iostream>
#include<conio.h>
using namespace std;
int calc(int a,int b,int c)
{
	int f,k;
	if(a>b)
	{
		f=a-b;
		k=c+1;
		cout<<"\n\n Seek time for request "<<k<<" = "<<f;
		return f;
	}
	else
	{
	f=b-a;
	k=c+1;
	cout<<"\n\n Seek time for request "<<k<<" = "<<f;
	return f;
}   
}

int main()
{
	int a[10],x,n,st=0,min=999,tmp,t,t1,t2,flag[10];
	cout<<"\n\t\t FCFS SCENARIO.......";
	cout<<"\n\n Enter the number of requests:";
	cin>>n;
	cout<<"\n Enter the requests for which the cylinder arm should be traversed to:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		flag[i]=0;
	}
	cout<<"\n Enter the initial position of the cylinder arm:";
	cin>>x;
	for(int j=0;j<n;j++)
	{
		if(j==0)
		{
		 st=st+calc(x,a[j],j);	
		}
		else
		{
		 st=st+calc(a[j],a[j-1],j);	
		}
	}
	cout<<"\n\n Total seek time =" <<st;
	st=0;
    cout<<"\n\n\t\t SSTF SCENARIO......";
	for(int g=0;g<n;g++)
	{
		if(g==0)
		{
		 for(int d=0;d<n;d++)
		 {
		 	if(x>a[d])
		 	{
		 		tmp=0;
		 		tmp=x-a[d];
		 		if(tmp<min)
		 	    {
		 	    st=0;
		 	    t1=0;
		 	    t2=0;
				t1=a[d];
				t2=d; 	
		 	    min=tmp;
		 	    st=st+min;
		 	    }
		 	    
		 	}
		 	else
		 	{
		 		tmp=0;
		 		tmp=a[d]-x;
		 		if(tmp<min)
		 		{
		 		st=0;
		 		t1=0;
		 		t2=0;
				t1=a[d];
				t2=d;	
		 		min=tmp;
		 		st=st+min;
		 	    }
		 	    
		 	}
		 }
		cout<<"\n\n Seek time for request "<<g+1<<" = "<<min;
		flag[t2]=1;
		min=999;	
		}
		else
		{
		t=st;
		for(int e=0;e<n;e++)
		{
			if(t1>a[e])
			{   
			    tmp=0;
				tmp=t1-a[e];
				if(tmp<min&&flag[e]==0)
		 		{
		 		st=t;
		 	    t2=0;
				t2=e;	
		 		min=tmp;
		 		st=st+min;
		 	    }
			}
			else if(t1<a[e])
			{
				tmp=0;
				tmp=a[e]-t1;
		 		if(tmp<min&&flag[e]==0)
		 		{
		 		st=t;
		 	    t2=0;
				t2=e;	
		 		min=tmp;
		    	st=st+min;
				}	
			  }
	        }
	cout<<"\n\n Seek time for request "<<g+1<<" = "<<min;
	flag[t2]=1;
	min=999;
	t1=a[t2];	
	}
  }
	cout<<"\n\n Total seek time ="<<st;
	getch();
	return 0;
}
