#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
 class integer
          {
                
             private:
                     
             char s[10];
             int i,a[10];
          
             public:
                    
                   integer()
                   
                  {
                         
                      for(i=0;i<10;i++)
                      
                      {
                         a[i]=0;              
                         s[0]='\0';
                         
                         }
                         
                         }
                         
                    
                         
                        integer(char*string)
                        
                        {  
                           strcpy(s,string);                 
                           int i,x;  
                           x=strlen(s);
                           
                           for(i=0;i<x;i++)
                           {
                             a[i]=s[i];
                             }
                             
                                            
                cout<<"\n"<<"The ASCII values are:";  
                for(i=0;i<x;i++)
                {
                            
                     cout<<"\t"<<a[i];           
          
          }
          
          }
          };

         class strint
         {
            private:
                    char s[10];
                    
            public:
                  
                  strint()
                  
                 {
                    s[0]='\0';
                    
                    }
                    
              operator integer()
              {
                  
                 return(integer(s));
                 
                 }       
                 
                 void getstring()
                     {
                         cout<<"\n Enter a string:";
                         cin>>s;
                         
                         } 
                                        
       
       };
          
          
         
                                                 
          
              
      

           
          
        int main()
        {
             integer i1;
            strint s1;
           s1.getstring();
            i1=s1 ;
           getch();
           return(0);
           
           }   
                
                               
           
                           

