#include<iostream>
#include<conio.h>
using namespace std;

class triangle
{

       public:
         
            int base,height;
            char a[10];
            
            
            void getdata()
              {
                   cout<<"\n Enter the name of the shape for which the area needs to be found:";
                   cin>>a;
                   cout<<"\n Enter the dimensions of the "<<a;
                   cin>>base;
                   cin>>height;
               }
               
            void process()
			{
				int area;
				area=0.5*base*height;
				cout<<"\n The area of the "<<a<<" is "<<area;
			}   
          };
          
          
    class parallelogram:public triangle
    {
    	int ar;
    	public:
    		 void process()
                      {
                          triangle::getdata();
                          ar=(base*height);
				cout<<"\n The area of the "<<a<<" is "<<ar;
			}   
          };
          
    int main()
    {
    	triangle t;
    	parallelogram p;
    	t.getdata();
    	t.process();
    	p.process();
    	getch();
    	return 0;
    }
    
