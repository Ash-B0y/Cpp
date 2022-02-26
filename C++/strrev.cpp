#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	std::string str;
	int x,c,asc,asc1,temp;
	cout<<"Enter a string.....";
	std::getline (std::cin,str);
	x=str.size();
	c=x-1;
	for(int i=0;i<x;i++)
	{
		if(i>=c)
		{
			cout<<str[i];
			continue;
		}
		asc=str[i];
		if((asc>=65)&&(asc<=90)||(asc>=97)&&(asc<=122))
		{
			asc1=str[c];
			if((asc1>=65)&&(asc1<=90)||(asc1>=97)&&(asc1<=122))
			{
				temp=str[i];
				str[i]=str[c];
				str[c]=temp;
				c--;
				cout<<str[i];
				
			}
			else
			{
				i--;
				c--;
			}
			
		}
		else
		{
		asc1=str[c];
			if((asc1>=65)&&(asc1<=90)||(asc1>=97)&&(asc1<=122));
				     
		     else
		     {
		     	c--;
		     }
		    cout<<str[i]; 
		 }
		
	}
	
	
}
