#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

 int main()
 {
 	int i,j,n,x;
     
    cout<<"\n Enter the no of stars you want at the bottom most level:";
    cin>>n;
    x=(n/2)+1;
    for(i=1;i<=n;i=i+2)
    {  
        cout<<setw(x);
    	for(j=1;j<=i;j++)
    
           { 
           	cout<<"*";
           }     	
 	
 	        cout<<endl;
 	        x--;
 	    }
 	    getch();
 	    return(0);
 }
