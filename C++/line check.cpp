#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int count=0,j=0,k=0,l=0,s;
char b[10],c[50];
void check();
void check()
{
  l++;
  cout<<"\n The "<< l <<". string copied is:";                
 for(int k=0;k<j;k++)
 {
  cout<<c[k];
  }               
  s=strcmp(b,c);
  if(s==0)
  {
    count++;
 }
 j=0;
 return;
}          

int main()
{
  int x;
  char a[50];
  cout<<"\n Enter a line........";
  cin.getline(a,20);
  x=strlen(a);
  cout<<"\n Enter a word .....";
  cin>>b;  
  for(int i=0;i<x;i++)
  {
   if(a[i]!=' ')
   {

   c[j]=a[i];
   j++;
   }
   else
   { 
     check();              
     }             
   }
cout<<"\n The number of occurences of the given string="<<count;
getch();
return 0;
}
