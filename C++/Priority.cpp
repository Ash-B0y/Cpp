#include<iostream>
#include<conio.h> 
using namespace std; 
 
int main() 
{ 
    int pr[5],w[5],a[5],b[5],t[5],p[5],temp,tmp,tp,x=0,t0,t1,t2,t3; 
    float aw,at,s1,s2,n; 
    cout<<"\n Enter the number of processes:"; 
    cin>>n; 
    cout<<"\n Enter the arrival time,burst time & priority of the processes:"; 
    for(int i=0;i<n;i++) 
    { 
        cin>>a[i]; 
        cin>>b[i]; 
        cin>>p[i];
        pr[i]=i; 
         
    } 
    cout<<"\n\t\t BEFORE EXECUTION"; 
    cout<<"\n"; 
    cout<<"\n PROCESSES \tARRIVAL TIME \tBURST TIME \tPRIORITY"; 
    cout<<"\n"; 
    for(int j=0;j<n;j++) 
    { 
     cout<<"\n P"<<pr[j]<<"\t\t"<<a[j]<<"\t\t"<<b[j]<<"\t\t"<<p[j];     
    } 
     
    for(int k=0;k<n;k++) 
    { 
    for(int l=k+1;l<n;l++) 
    { 
        if(a[l]<a[k]) 
        { 
            temp=p[k]; 
            p[k]=p[l]; 
            p[l]=temp; 
            tmp=b[k]; 
            b[k]=b[l]; 
            b[l]=tmp; 
            tp=pr[k]; 
            pr[k]=pr[l]; 
            pr[l]=tp; 
            t1=a[k];
            a[k]=a[l];
            a[l]=t1;
        } 
    } 
  }
  for(int f=1;f<n;f++) 
    { 
    for(int g=f+1;g<n;g++) 
    { 
        if(p[g]<p[f]) 
        { 
            t0=a[f]; 
            a[f]=a[g]; 
            a[g]=t0; 
            t1=b[f]; 
            b[f]=b[g]; 
            b[g]=t1; 
            t2=pr[f]; 
            pr[f]=pr[g]; 
            pr[g]=t2; 
            t3=p[f];
            p[f]=p[g];
            p[g]=t3;
        } 
    } 
  }


    

 
  cout<<"\n\n\t\t AFTER EXECUTION"; 
  cout<<"\n"; 
  cout<<"\n PROCESSES \tARRIVAL TIME \tBURST TIME \tPRIORITY"; 
  cout<<"\n"; 
    for(int m=0;m<n;m++) 
    { 
     cout<<"\n P"<<pr[m]<<"\t\t"<<a[m]<<"\t\t"<<b[m]<<"\t\t"<<p[m];     
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
    getch();
    return 0;
     
}
