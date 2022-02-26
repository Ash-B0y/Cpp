#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
char a[10],b[10];	
int front=-1;
void push(char cha)
{
	++front;
	b[front]=cha;
}
void pop()
{
--front;	
}
 
int main()
{
 
  int x;
  cout<<"\n Enter the expression:";
 cin>>a;
 x=strlen(a);
 for(int i=0;i<x;i++)
 {
 	if(a[i]=='{'||a[i]=='['||a[i]=='('||a[i]=='}'||a[i]==']'||a[i]==')')
 	{

       if(a[i]=='{')
       	push(a[i]);
       	else if(a[i]=='}')
       	{
       	if(b[front]=='{')
       	pop();
        }
       	else if(a[i]=='(')
       	push(a[i]);
       	else if(a[i]==')')
       	{
       	if(b[front]=='(')
       	pop();
      }  
       
      	else if(a[i]=='[')
       	push(a[i]);
       	else if(a[i]==']')
       	{
       	       	if(b[front]=='[')
       	       	
             	pop();
       	       
            }
   }
}
    
       if(a[0]=='}'||a[0]==']'||a[0]==')'||(front!=-1))
       cout<<"\n THE EXPRESSION IS NOT BALANCED";      
	   else if(front==-1)
       cout<<"\n THE EXPRESSION IS BALANCED";
        
       getch();
       return(0);
   
}
