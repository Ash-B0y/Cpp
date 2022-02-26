#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char a[20],b[20],c[20]={'F','L','A','M','E','S'},d[20],e,f[10];
	char* ans[6]={"Friends","Love","Affection","Marriage","Enemy","Sister"};
	int m,i,n,x=6,p=0,ct=0,cp=0,y=-1,u=0,z=0,s=0,t=0;
	cout<<"\t NOTE: Key in your input without widespaces....";
	cout<<"\n\n\t Enter your name:";
	cin>>a;
	cout<<"\n\n\t Enter the name for which you want to find the relationship with:";
	cin>>b;
	m=strlen(a);
	n=strlen(b);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
	
			if(a[i]==b[j]&&cp==0)
			{
				p+=2;				
				b[j]='*';
			}
		}
		
	}
	cp=(m+n)-p;
	while(x!=1)
	{
	y=-1;
	for(int k=1;k<=cp;k++)
	{
		
		if(y==x-1)
		y=0;
		else
		y++;
	}
	if(y==x-1)
	e=c[0];
	else
	e=c[y+1];
	u=0;
	for(int v=0;v<x;v++)
	{
		if(v==y)
		continue;
		else
		{
		d[u]=c[v];
		u++;
		}
	}
	d[u]='\0';
	x--;
	for(int g=0;g<x;g++)
       f[g]=d[g];
	z=0;
	ct=0;
	t=0;
	while(ct!=x)
	{
		if(f[z]==e||(ct>0))
		{
		 c[t]=f[z];
		 ct++;
		 t++;	
		}
		z++;
		if(z==x)
		z=0;
	}
 }
 for(i=0;i<6;i++)
    if(c[0]==ans[i][0])
      cout<<"\n\n\t The relationship between you two is:  "<<ans[i];
	return 0;
}
