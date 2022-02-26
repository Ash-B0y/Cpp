#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
  int x,ct=1,j=0;
  char a[50],b[50];
  cout<<"\n Enter a line........";
  cin.getline(a,20);
  x=strlen(a);
  for(int i=0;i<x;i++)
  {
  	b[j]=a[i];
  	j++;
  }
  for(int k=0;k<x;k++)
  {
  
   if(a[k]==b[k+1])
  	{
  		ct++;
  	}
  	else
  	{
  		cout<<"\n\t"<<a[k]<<":"<<ct;
  		ct=1;
  	}
  }
  getch();
  return 0;
}
