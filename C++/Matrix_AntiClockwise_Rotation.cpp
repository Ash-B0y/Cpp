#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
            int m,n,a[300][300],temp,k=0,l=0,tr=0,tr2=-1,tr3=1,r1=0,r2=0,r,min=0;
            cout<<"\n Enter the order of the matrix:";
			cin>>m>>n;
			cout<<"\n Enter the number of rotations to be made:";
			cin>>r;
			cout<<"\n Enter the elements of the matrix:";
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
			
            if((k==tr)&&(l<n-tr3))
            {
            
            a[k][l]=a[k][l+1];
            l++;
            }
        else if((k==m-tr3)&&(l>=tr))
            {
            a[k][l]=a[k][l-1];
            l--;
        }
        
        else if((l==n-tr3)&&(k<m-tr3))
            {
            a[k][l]=a[k+1][l];
            k++;
             }
          
        else if((l==tr2)&&(k>=tr))
            {
            if(k==tr3)
                {
                a[k][l+1]=temp;
                break;
                }
            else
            {    
            a[k][l+1]=a[k-1][l+1];
            k--;
            }
        }
            
    }
    tr++;
    tr2++;
    tr3++;
    r1++;
    r2++;
    k=r1;
    l=r2;
    temp=a[r1][r2];
}
k=0;
l=0;
tr=0;
tr2=-1;
tr3=1;
r1=0;
r2=0;
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


