#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

char a[20];
int fr=0,res,arr[10];
void push(int tot)
{

	arr[fr]=tot;
	fr++;
		
}

int main()
{
 int x,cnt=0,ptr=0;	
 cout<<"\n Enter the expression:";
 cin>>a;
 x=strlen(a);
 for(int i=0;i<x;i++)
 {
 	if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
 	{
 		++cnt;
 		switch(a[i])
 		{
 			case '+': res=arr[fr-2]+arr[fr-1];
			        
					  fr=fr-2;
					  push(res);
			          break;
	
			          
 			case '-': res=arr[fr-2]-arr[fr-1];
			          fr=fr-2;
					  push(res);
		              break;
		              
		    case '*': res=arr[fr-2]*arr[fr-1];
		              fr=fr-2;
			          push(res);
			          break;
			          
		    case '/': res=arr[fr-2]/arr[fr-1];
		              fr=fr-2;
			          push(res);
			          break;
			          
			
		}
	}
	        
		else 
		{
			int b;
			++ptr;
		cout<<"\n Enter the value of "<< a[i]<<" : ";
		cin>>b;
	    push(b);
		}
		
}    
         
        if((a[1]!='+'&&a[1]!='-'&&a[1]!='*'&&a[1]!='/')&&(ptr==cnt+1))
        cout<<"\nThe value of the Postfix Expression after evaluation is:"<<arr[0];
        else
 		cout<<"\n INVALID EXPRESSION";

 		
 		 		
 	}
