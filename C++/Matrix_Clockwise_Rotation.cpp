#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
            int m,n,a[300][300],temp,k=0,tr=0,r1=0,r,min=0;
            cout<<"\n Enter the order of the matrix:\n";
			cin>>m>>n;
			cout<<"\n Enter the number of rotations to be made:\n";
			cin>>r;
			int l=n-1,tr2=m-1,tr3=n-1,r2=n-1;
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
	    temp=a[r1][r2];    
	 for(int j=0;j<min;j++)
	 {       
   while(1)
       {		   	
            if((k==tr)&&(l>tr))
            {
            a[k][l]=a[k][l-1];
            l--;
            }
        else if((k<tr2)&&(l==tr))
            {
            a[k][l]=a[k+1][l];
            k++;
        }
        
        else if((k==tr2)&&(l<tr3))
            {
            a[k][l]=a[k][l+1];
            l++;
             }
          
        else if((l==tr3)&&((k-1)>=tr))
            {
            if((k-1)==tr)
                {
                a[k][l]=temp;
                break;
                }
            else
            {    
            a[k][l]=a[k-1][l];
            k--;
            }
        }
            
    }
    tr++;
    tr2--;
    tr3--;
    r1++;
    r2--;
    k=r1;
    l=r2;
    temp=a[r1][r2];
}
k=0;
l=n-1;
tr=0;
tr2=m-1;
tr3=n-1;
r1=0;
r2=n-1;
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


