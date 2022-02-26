
#include<iostream>
#include<conio.h>
using namespace std;
int a[5],t=0;
 void push();
 void pop();
 void peep();
 void show();
 void push()
 {
    
	cout<<"\n"<<"Enter the element:";
	
		
		cin>>a[t];
		++t;

		
	if(t>4)
	{
	cout<<"\n"<<"The stack is full";
 } 
 }
 
  void pop()
  { 
     
     cout<<"The element popped out is "<<a[t-1];
     --t;
     
     
    if(t==-1)
	{
	 cout<<"\n"<<"The stack is empty ";
}

 

 	
}

 void peep()
 {
 	
 	
 	cout<<"\n"<<"The element at the top of the stack is: "<<a[t-1];
 	
 }
      
      void show()

      {
          for(int i=0;i<t;i++)
          
      		{
      			cout<<"\n"<<a[i];
      		}

      	
     	

      } 	
      
      
      
 int main()
 {
 	
 	int m;   
    
 	cout<<"\n 1..........\t\t"<<"PUSH";
 	cout<<"\n 2..........\t\t"<<"POP";
 	cout<<"\n 3..........\t\t"<<"PEEP";

 	while(1)
 	{
 	cout<<"\n"<<"Enter a choice from the given menu:";
 	cin>>m;
 	switch(m)
 	
 	{
 		case 1: push();
 		        break;
 	
 	
 	   	case 2: pop();
 		        break;
 	
 	   	case 3: peep();
 		        break;
 		        
 		case 4: show();
		        break;     
 	      
 	    default:
 	    	     cout<<"\n"<<"You have entered an invalid choice:";
 	    	     return 0;
 	    	}
 	    
 	}
 	}
 	
 	
 	
 	    		
 	    	
			 	
