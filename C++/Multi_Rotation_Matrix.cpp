#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
            int m,n,a[300][300],atemp,ctemp,ak=0,al=0,atr=0,ar1=0,ar2=0,ck=1,ctr=1,cr1=1,r,min=0;
            cout<<"\n Enter the order of the matrix:\n";
			cin>>m>>n;
			cout<<"\n Enter the number of rotations to be made:\n";
			cin>>r;
			int atr2=m-1,atr3=n-1,cl=n-2,ctr2=m-2,ctr3=n-2,cr2=n-2;
			cout<<"\n Enter the elements of the matrix:\n";
            for(int i=0;i<m;i++)
                {
                for(int j=0;j<n;j++)
                    {
                    cin>>a[i][j];
                }
            }
            
            if(m<n)
            min=(m/2);
            else
            min=(n/2);
    for(int i=0;i<r;i++)
	{
	        
	 for(int j=0;j<min;j++)
	 {
	 if(j%2==0)
	 { 
	 atemp=a[ar1][ar2];      
   while(1)
       {
			
            if((ak==atr)&&(al<atr3))
            {
            a[ak][al]=a[ak][al+1];
            al++;
            }
            else if((al==atr3)&&(ak<atr2))
            {
            a[ak][al]=a[ak+1][al];
            ak++;
             }
        else if((ak==atr2)&&(al>atr))
            {	
            a[ak][al]=a[ak][al-1];
            al--;
        }
        
        
          
        else if((al==atr)&&((ak-1)>=atr))
            {
            if((ak-1)==atr)
                {
                a[ak][al]=atemp;
                break;
                }
            else
            {    
            a[ak][al]=a[ak-1][al];
            ak--;
            }
        }
            
    }
    atr+=2;
    atr2-=2;
    atr3-=2;
    ar1+=2;
    ar2+=2;
    ak=ar1;
    al=ar2;
    atemp=a[ar1][ar2];
}
    else
    {
    	ctemp=a[cr1][cr2];
    while(1)
       {		   	
            if((ck==ctr)&&(cl>ctr))
            {
            a[ck][cl]=a[ck][cl-1];
            cl--;
            }
        else if((ck<ctr2)&&(cl==ctr))
            {
            a[ck][cl]=a[ck+1][cl];
            ck++;
        }
        
        else if((ck==ctr2)&&(cl<ctr3))
            {
            a[ck][cl]=a[ck][cl+1];
            cl++;
             }
          
        else if((cl==ctr3)&&((ck-1)>=ctr))
            {
            if((ck-1)==ctr)
                {
                a[ck][cl]=ctemp;
                break;
                }
            else
            {    
            a[ck][cl]=a[ck-1][cl];
            ck--;
            }
        }
            
    }
    ctr+=2;
    ctr2-=2;
    ctr3-=2;
    cr1+=2;
    cr2-=2;
    ck=cr1;
    cl=cr2;
    ctemp=a[cr1][cr2];	
    }
}
ak=0;
al=0;
atr=0;
atr2=m-1;
atr3=n-1;
ar1=0;
ar2=0;
ck=1;
ctr=1;
cr1=1;
cl=n-2;
ctr2=m-2;
ctr3=n-2;
cr2=n-2;
}

cout<<"\n The matrix after Rotation:\n";
    for(int w=0;w<m;w++)
                {
                for(int e=0;e<n;e++)
                    {
                    cout<<a[w][e]<<" ";
                }
                cout<<"\n";
            }
 
    return 0;
}


