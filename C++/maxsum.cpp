#include<iostream>
using namespace std;

int main()
{
	int a[10],b[10],max[10]={0},sum=0,x=0,y=0,n,mx=0,cnt=0;
	cout<<"Enter the number of Elements....";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int j=0;j<n;j++)
	{
		if(a[j]<0)
		continue;
		for(int f=j;f<n;f++)
		{
			if(a[f]>0)
			{   
			     if(y==0)
			     {
			     
				for(int v=0;v<n;v++)
				{
					b[v]=0;
					
				}
				x=0;
			   }
				
				sum+=a[f];
				b[x]=a[f];
				x++;
				y++;
			}
			else if(a[f]<0)
			f=(n-1);
		}
		if(sum>=mx)
		{
			mx=sum;
			cnt=x;
			for(int g=0;g<=cnt;g++)
			{
				max[g]=0;
				max[g]=b[g];
				
			}
		}
		sum=0;
		y=0;
	}
	cout<<" Max sum= "<<mx;
	cout<<"\n The elements are:";
	for(int m=0;m<cnt;m++)
			{
				cout<<max[m]<<" ";
			}
		return 0;
	
}
