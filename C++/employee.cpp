#include<iostream>
#include<conio.h>
using namespace std;

 class employee
 {
 	private:
 		int employeeid,basicpay,CCA,HRA;
 		char name[15];
 		public:
 			employee()
 			{
 		     CCA=1500;
 		     HRA=2000;
 		 }
 		 
 		 void getdata()
 		 {
 		  	    	
 		 		cout<<"\n Enter the name of the employee:";
 		 		cin>>name;
 		 		cout<<"\n Enter the employee's id:";
 		 		cin>>employeeid;
 		 		cout<<"\n Enter the basicpay:";
 		 		cin>>basicpay;
 		 		
 	}
 	
 	
 	   void process(employee sobj[])
 	   {
 	   	float grosspay[5];
 	   	int i;
 	   	
 	   	for(i=0;i<5;i++)
 	   	{
 	   	grosspay[i]=sobj[i].CCA+sobj[i].HRA+sobj[i].basicpay+sobj[i].basicpay*60.00/100-sobj[i].basicpay*12.00/100-sobj[i].basicpay*12.30/100-sobj[i].basicpay*60.00/100*12.30/100;
 	   	cout<<"\n"<<grosspay[i];
 	   	
 	   }
        
   }
 	   
 };
 
 int main()
 {
 	employee obj[5],ob;
 	int i=0;
 	
 	for(i=0;i<5;i++)
 	{
 	
 	obj[i].getdata();
 }
 	ob.process(obj);
 
 	getch();
 	return 0;
 	
 }
