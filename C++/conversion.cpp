#include<iostream>
#include<conio.h>

 using namespace std;
 
 class degree
 
 {
       
       private:
               
              float deg;
              
        public:
               
              degree()
              {
                     
                   deg=0.0;
                   
                   }
                   
                  degree(float rdeg)
                  {
                               
                    deg=rdeg;
                    
                    }             
                   
               
            float getvalue()
            {                    
                 
                return(deg);
                
                
                }
                
             void display()
             
             {
                  
                 cout<<"The value in terms of degree="<<getvalue();
                 
                 }
                                   
                  };
                 
                 
                 
              class Radian
              
              {
                    
                  private:
                          
                  float ra;
                  
                  public:
                         
                       Radian()
                       
                       {
                               
                          ra=0.0;
                          
                          }
                          
                          
                      operator degree()
                      
                      {
                               return(degree(ra*(180/3.14)));
                               
                      }
                               
                            void getvalue()
                            
                            {
                                 
                                cout<<"\n"<<"Enter the value of radian:";
                                cin>>ra;
              
		                    }
                                
                                
                                };
                                
                                
                         int main()
                         {
                             
                            degree deg1;
                            Radian rad1;
                            rad1.getvalue();
                            deg1=rad1;
                            deg1.display();
                            getch();
                            return 0;
                          
                          }                   
                          
                          
                                                          

