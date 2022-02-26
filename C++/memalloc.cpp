#include<iostream>
#include<Conio.h>
using namespace std;

int main()
{
  int pr[5],n,s[5],h[5],hc[5],ct=0,cp=0,tmp;
   for(int i=0;i<n;i++)
  {
    hc[i]=0;
  }
  cout<<"\n Enter the number of processes:";
  cin>>n;
  cout<<"\n Enter the size of each process and the available holes:";

  for(int i=0;i<n;i++)
  {
      cin>>s[i];
      cin>>h[i];
      pr[i]=i;
  }
  cout<<"\n PROCESSES \tSIZE";
  cout<<"\n";
  for(int i=0;i<n;i++)
  {
      cout<<"\n P"<<pr[i]<<"\t\t"<<s[i];
  }
  cout<<"\n SPACE AVAILABLE";
   for(int i=0;i<n;i++)
  {
      cout<<"\n\t"<<h[i];
  }
    cout<<"\n\n FIRST FIT SCENARIO...";
    cout<<"\n";
     for(int i=0;i<n;i++)
     {
      for(int j=0;j<n;j++)
      {
         if(h[j]>=s[i]&&hc[j]==0&&ct==0)
         {
             hc[j]=1;
             cout<<"\n";
             cout<<"P"<<pr[i]<<" is allocated with the hole size of "<<h[j]<<" KB ";
             ct++;
         }
         else
         {
         	cp++;
         }
      }
      ct=0;
      if(cp==n)
	 {
	 	cout<<"\n"<<"P"<<pr[i]<<" is left unallocated";
      }
      cp=0;
    }
    for(int i=0;i<n;i++)
  {
    hc[i]=0;
  }
    cout<<"\n\n BEST FIT SCENARIO...\n";
   for(int k=0;k<n;k++)
	{
	for(int l=k+1;l<n;l++)
	{
		if(h[l]<h[k])
		{
			tmp=h[k];
			h[k]=h[l];
			h[l]=tmp;
		}
    }
  }    
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
         if(h[j]>=s[i]&&hc[j]==0&&ct==0)
         {
             hc[j]=1;
             cout<<"\n";
             cout<<"P"<<pr[i]<<" is allocated with the hole size of "<<h[j]<<" KB ";
             ct++;
         }
         else
         {
         	cp++;
         }
      }
      ct=0;
      if(cp==n)
	 {
	 	cout<<"\n"<<"P"<<pr[i]<<" is left unallocated";
      }
      cp=0;
      
  }
  for(int i=0;i<n;i++)
  {
    hc[i]=0;
  }
cout<<"\n\n WORST FIT SCENARIO...\n";
   for(int k=0;k<n;k++)
	{
	for(int l=k+1;l<n;l++)
	{
		if(h[l]>h[k])
		{
			tmp=h[k];
			h[k]=h[l];
			h[l]=tmp;
		}
    }
  }    
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
         if(h[j]>=s[i]&&hc[j]==0&&ct==0)
         {
             hc[j]=1;
             cout<<"\n";
             cout<<"P"<<pr[i]<<" is allocated with the hole size of "<<h[j]<<" KB ";
             ct++;
         }
         else
         {
         	cp++;
         }
      }
      ct=0;
      if(cp==n)
	 {
	 	cout<<"\n"<<"P"<<pr[i]<<" is left unallocated";
      }
      cp=0;
      
  }

    getch();
    return 0;
}

