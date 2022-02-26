#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	char text[20],pattern[10];
	int m,n,ct,j,temp,k,f=0;
	cout<<"\n Enter the required text:";
	cin>>text;
	cout<<"\n Enter the pattern to be matched:";
	cin>>pattern;
	m=strlen(text);
	n=strlen(pattern);
	j=0;
	for(int i=0;i<m;i++)
	{
				
		if(pattern[j]==text[i])
		{
			k=i;
			temp=i;
			ct=0;
			for(int j=0;j<n;j++)
			{
	 
				if(pattern[j]==text[k])
				{
				ct++;
				k++;
			   }
				else
				{
			    j=0;
			    i=temp;
			    break;
				} 	
       	       }
       }
       		if(ct==n)
			{
				f++;
			}
	    }
		if(f>0)
		cout<<"\n The given pattern is matched in the text entered.... ";	
		else
		cout<<"\n The given pattern cannot be matched for the text entered.... ";
		getch();
		return 0;
		
		}
 
