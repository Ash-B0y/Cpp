   #include<iostream>
   #include<conio.h>
   using namespace std;
   
   int main()
   {

    int g[10],n,q,r,i,j;
	cout<<"\n Enter a decimal number:";
	cin>>n;
	
	for(i=0;q!=0;i++)
	{
		q=n/16;
		r=n%16;
		n=q;
		g[i]=r;
		
	}
	cout<<"\n";
	for(j=i-1;j>=0;j--)
	{
	
	cout<<"\t"<<g[j];
	 
   }
   getch();
   return 0;
}

