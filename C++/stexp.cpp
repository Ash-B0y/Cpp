#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()

{
	char a[10],b[10];
	int i,j=0,x,l,k,q;
	cout<<"\n Enter a string:";
	cin>>a;
	l=a[0]-'0';
	x=strlen(a);
	for(i=1;i<=x;i++)
	{		
	  if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='\0')
		{
		
		for(k=0;k<l;k++)
			{
				for(q=0;q<j;q++)
				{
			    cout<<b[q];
			    }
			    cout<<"\n\t";
            }
			 
        l=a[i]-'0';
        j=0;
       }
       
       	else
		{
		 b[j]=a[i];
		 j++;	
		}
	}
	getch();
	return 0;
}
