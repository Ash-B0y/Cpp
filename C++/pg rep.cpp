#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int pg[20],fr[10],n,m,ct=0,pf=0,frc[10],min,min1=0,y=0,x=0;
	cout<<"\n Enter the number of frames: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		fr[i]=0;
    }
	cout<<"\n Enter the number of pages & enter them:";
	cin>>m;
	for(int i=0;i<m;i++)
	{
	 cin>>pg[i];	
	}
	cout<<"\n\t FIFO SCENARIO";
	cout<<"\n\n";
	for(int j=0;j<m;j++)
    {
    	 if(x==n)
         	x=0;
    	for(int k=0;k<n;k++)
    	{
    	 if(pg[j]==fr[k])
    	 ct++;
    	}
    	if(ct==0)
    	{
    		fr[x]=pg[j];
    		 x++;
    		 pf++;
    	}
        cout<<"\t"<<pg[j]<<":";	
    	 for (int l=0;l<n;l++)
		 {
		 	cout<<fr[l];
		 	cout<<"\t";
		 }	
		 cout<<"\n";
		 ct=0;
		 if(j==m-1)
		 cout<<"\n\t No of page faults="<<pf;
    	}
    	pf=0;
         for(int i=0;i<n;i++)
      	{
		fr[i]=0;
        } 
	
    cout<<"\n\n\t LRU SCENARIO";
    	cout<<"\n\n";
    	for(int s=0;s<m;s++ )
    	{
    	for(int k=0;k<n;k++)
    	{
    	 if(pg[s]==fr[k])
    	 ct++;
    	}
    	
    	if(ct==0&&s<n)
    	{
    	 fr[y]=pg[s];
    		 y++;
    		 pf++;
    	}
    	if(s>=n&&ct==0)
    	{
    		y=0;
    	 for(int i=0;i<n;i++)
	    {
	   	 for(int j=s;j>=0;j--)
	   	 {
	   	 	if(fr[i]==pg[j])
	   	 	{
	   	 		frc[i]=j;
	   	 		break;
	   	 	}
		}	 	   	   
    	}
    	 min=frc[0];
         for(int e=0;e<n;e++)    	
          {
          	if(frc[e]<min)
          	{
          		min=frc[e];
          		min1=e;
          	}
          	
          }
		  y=min1;
		  fr[y]=pg[s];
		  pf++;
	      }     	
    	cout<<"\t"<<pg[s]<<":";	
    	 for (int l=0;l<n;l++)
		 {
		 	cout<<fr[l];
		 	cout<<"\t";
		 }
		 cout<<"\n";
		 if(s==m-1)
		 cout<<"\n\t No of page faults="<<pf;
		 ct=0;
    	}
    
    getch();
    return 0;
} 
