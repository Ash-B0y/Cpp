#include<iostream>
#include<conio.h>
using namespace std;

 class student
 {
 	private:
 		int studentid,ma1,ma2,ma3;
 		char name[15];
 		public:
 			student()
 			{
 		     name[0]='/o';
 		     studentid=0;
 		     ma1=0;
 		     ma2=0;
 		     ma3=0;
 		   }
 		 
 		 void getdata()
 		 {
 		  	    	
 		 		cout<<"\n Enter the name of the student:";
 		 		cin>>name;
 		 		cout<<"\n Enter the student's id:";
 		 		cin>>studentid;
 		 		cout<<"\n Enter the subject marks:";
 		 		cin>>ma1>>ma2>>ma3;
 		 	}
 		 	
 		 	void process(student sobj[])
 	   {
 	   	 int total[3];
 	   	
 	   	for(int i=0;i<3;i++)
 	   	{
 	   	total[i]=sobj[i].ma1+sobj[i].ma2+sobj[i].ma3;
 	   	cout<<"\n"<<total[i];
 	   }
 	    int i=0;
 	    if((total[i]>total[i+1])&&(total[i]>total[i+2]))
 	    {
 	    cout<<"\n\t The first rank holder is:";
 	    cout<<"\n\t"<<sobj[i].name;
 	    }
 	    else if((total[i+1]>total[i])&&(total[i+1]>total[i+2]))	   
		  {
		 cout<<"\n\t The first rank holder is:";
 	     cout<<"\n\t"<<sobj[i+1].name;
         }
 	   
 	    else
 	    {
		 cout<<"\n\t The first rank holder is:";
 	     cout<<"\n\t"<<sobj[i+2].name;	
 	    }
 	    
 	
   }
 };
 	
 	int main()
 {
 	student obj[3],ob;
 	int i=0;
 	
 	for(i=0;i<3;i++)
 	{
 	
 	obj[i].getdata();
   }
 	ob.process(obj);
 
 	getch();
 	return 0;
 }
 	
 

