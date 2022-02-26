
#include<iostream>
#include<conio.h>
using namespace std;
int a[10],t=0,i=0,n;
 void enqueue();
 void dequeue();
 void display();
 void enqueue()
 {
    if(t>=n)
	{
	cout<<"\n"<<"The queue is full";
   }
  else
  {
    
	cout<<"\n"<<"Enter the element:";		
		cin>>a[t];
		++t;
 }
		
	
 }
 
  void dequeue()
  { 
  cout<<"\n The element dequeued is:"<<a[0];
  t--;
  for(int i=0;i<t;i++)
  {
     a[i]=a[i+1];
 }
 
    if(i>t)
	{
	 cout<<"\n"<<"The queue is empty ";
   }
}

      
      void display()

      {
          for(int j=i;j<t;j++)
          
      		{
      			cout<<"\n"<<a[j];
      		}

      	
     	

      } 	
      
      
      
 int main()
 {
 	
 	int m;   
    cout<<"\n Enter the size of the array:";
    cin>>n;
 	cout<<"\n 1..........\t\t"<<"ENQUEUE";
 	cout<<"\n 2..........\t\t"<<"DEQUEUE";
 	cout<<"\n 3..........\t\t"<<"DISPLAY";

 	while(1)
 	{
 	cout<<"\n"<<"Enter a choice from the given menu:";
 	cin>>m;
 	switch(m)
 	
 	{
 		case 1:  enqueue();
 		        break;
 	
 	
 	   	case 2: dequeue();
 		        break;
 	
 	   	case 3: display();
 		        break;
 		          
 	    default:
 	    	     cout<<"\n"<<"You have entered an invalid choice:";
 	    	     return 0;
 	    	}
 	    
 	}
 	}
 	
 	
 	
 	    		
 	    	
			 	
