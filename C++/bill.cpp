#include<iostream>
#include<conio.h>

using namespace std;

 class bill
 {
 	char name[10];
 	int mid,sm,em,year,sum,tc;
 	
 	public:
 		
 		 bill()
 		 {
 		 	name[0]='/o';
 		 	mid=0;
 		 	sm=0;
 		 	em=0;
 		 	year=0;
 		 	tc=0;
 		 }
 		 
 		 bill(int meid,int ye)
 		 {
 		 	meid=mid;
 		 	ye=year;
 		 	
 		 }
 		 
 		 void calc()
 		 { 
 		     int i,tod,sum=0;
 		 	cout<<"\n Enter the consumer's name :";
 		 	cin>>name;
 		 	cout<<"\n Enter the metre id:";
 		 	cin>>mid;
 		 	cout<<"\n Enter the year:";
 		 	cin>>year;
 		 	cout<<"\n Enter the starting month:";
 		 	cin>>sm;
 		 	cout<<"\n Enter the ending month:";
 		 	cin>>em;
 		 	
 		 	for(i=sm;i<em;i++)
 		 	{
 		 		if((i==2) && (year%4==0))
 		 		
 		 		{
 		 			tod=29;
 		 		}
 		 		
 		 		else if((i==2) && (year%4!=0))
 		 		
 		 		{
 		 			tod=28;
 		 		}
 		 		
 		 		
 		 		else if(i%2==0)
 		 	     
 		 	     {
 		 	      tod=30;
 		 	     }
 		 	     else if(i%2!=0)
 		 	     {
 		 	     
		         	tod=31;
 		 	     }
 		 	     sum+=tod;
                 
 		 		
 		 	}
 		 	
 		 	if((sum<=100))
 		 	
 		 	{
 		 		tc=sum*1;
 		 	}
 		 	else if((sum<=150))
 		 	{
 		 	 tc=100+(sum-100)*3;
			
 		 	}
 		 	else if((sum<=200))
 		 	{
 		 		tc=100+150+(sum-150)*5;
 		 	}
 		 	
 		 	else if((sum>200))
 		 	{
 		 		tc=100+150+250+(sum-200)*10;
 		 	}
 		 	cout<<"\n Total days="<<sum;
 		 }
 		 
 		 void calc(int sta,int end=6 )
 		 {
 		 	int i,tod,sum=0;
 		 	cout<<"\n Enter the consumer's name :";
 		 	cin>>name;
 		 	cout<<"\n Enter the metre id:";
 		 	cin>>mid;
		   	
 		 	for(i=sta;i<end;i++)
 		 	{
 		 		if((i==2) && (year%4==0))
 		 		
 		 		{
 		 			tod=29;
 		 		}
 		 		
 		 		else if((i==2) && (year%4!=0))
 		 		
 		 		{
 		 			tod=28;
 		 		}
 		 		
 		 		
 		 		else if(i%2==0)
 		 	     
 		 	     {
 		 	      tod=30;
 		 	     }
 		 	     else
 		 	     {
 		 	     
		         	tod=31;
 		 	     }
 		 	     sum+=tod;
                 
 		 		
 		 	}
 		 	
 		 	if((sum<=100))
 		 	
 		 	{
 		 		tc=sum*5;
 		 	}
 		 	else if((sum<=150))
 		 	{
 		 	 tc=100+(sum-100)*10;
			
 		 	}
 		 	else if((sum<=200))
 		 	{
 		 		tc=100+150+(sum-150)*50;
 		 	}
 		 	
 		 	else if((sum>200))
 		 	{
 		 		tc=100+150+250+(sum-200)*100;
 		 	}
 		 	
 		 	cout<<"\n Total days="<<sum;
 		 }
 		 
         void display()
         {
         	cout<<"\n\t"<<name;
         	cout<<"\n\t"<<mid;
         	
         	cout<<"\n Total cost="<<tc;
         }
		 
		 
		  		 	
 	};
 	
 	
 	int main()
 	
 	{
 		bill b1,b3;
 		bill b2(1156,2014);
 		int choice;
 		cout<<"\n Enter your choice:";
 		cin>>choice;
 		
 		switch(choice)
 	{
 		case 1: b1.calc();
 		        b1.display();
 		        break;
 		        
 		case 2: b2.calc(2);
		        b2.display();
				break;
				
		case 3: b3.calc();
 		        b3.display();
 		        break;
				 
        default:
        	    
        	    cout<<"\n INVALID CHOICE!!";
        	    
				 		        
 	}
 		
 getch();
 return(0);
 getch();
 
}
 		
 		 
 		
 	
