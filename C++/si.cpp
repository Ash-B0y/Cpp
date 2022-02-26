
#include<iostream>
#include<conio.h>
using namespace std;

 class SI
 {
 	private:
 		    int p,n,r;
    public:
	       
		  void getdata()
		  {
		  	cout<<"\n Enter the principle amount:";
		  	cin>>p;
		  	cout<<"\n Enter the no of years:";
		  	cin>>n;
		  	cout<<"\n Enter the rate of interest:";
		  	cin>>r;
		  }	
		  
		  void process()
		  {
		  	int si;
		  	si=(p*n*r)/100;
		  	cout<<"\n The simple interest for the given principle,r.o.i and no of years is:";
		  	cout<<"\n\n\t"<<si;
		  }	    
 };
 
 int main()
 {
 	SI s;
 	s.getdata();
 	s.process();
 	getch();
 	return 0;
 }
