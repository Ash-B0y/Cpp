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
 for(int i=x-1;i>=0;i--)
 {
 	if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
 	{
 		++cnt;
 		switch(a[i])
 		{
 			case '+': res=arr[fr-1]+arr[fr-2];
			        
					  fr=fr-2;
					  push(res);
			          break;
	
			          
 			case '-': res=arr[fr-1]-arr[fr-2];
			          fr=fr-2;
					  push(res);
		              break;
		              
		    case '*': res=arr[fr-1]*arr[fr-2];
		              fr=fr-2;
			          push(res);
			          break;
			          
		    case '/': res=arr[fr-1]/arr[fr-2];
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
         if((a[x-1]=='+')||(a[x-2]=='+')||(a[x-1]=='-')||(a[x-2]=='-')||(a[x-1]=='*')||(a[x-2]=='*')||(a[x-1]=='/')||(a[x-2]=='/')) 
         cout<<"\n INVALID EXPRESSION";
         else
         
         cout<<"\n The value of the Prefix Expression after evaluation is:"<<arr[0];

 		
 		 		
 	}
