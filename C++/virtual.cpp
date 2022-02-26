#include<iostream>
#include<conio.h>
using namespace std;

 class Father
 {
 
      public:
             char name[10];
             Father()
             {
               name[0]='\0';
               
               }
              virtual void show()
              {
               cout<<"\n Enter the name:";       
               cin>>name;       
               cout<<"\n\t"<<name;
               }
               
               };
               
     
     class major:public Father
     {
           protected:
            int salary;         
            
        public:

               major()
               {
                name[0]='\0';
                salary=0;
                }
                               
                void show()
              {
               cout<<"\n Enter the name:";   
               cin>>name;
               cout<<"\n\t"<<name;
               cout<<"\n Enter the salary:";
               cin>>salary;
               cout<<"\n\t"<<salary;
               }
                 
                 };  
                 
               
     class minor:public Father
     {
        protected:
         int age;            
        public:
               char name[10];
               
               minor()
               {
                 name[0]='\0';                                                        
                 age=0;               
                 }
                               
                void show()
              {
               cout<<"\n Enter the name:";         
               cin>>name;      
               cout<<"\n\t"<<name;
               cout<<"\n Enter the age:";
               cin>>age;
               cout<<"\n\t"<<age;
               }
               };
               
               
             int main()
             {
                Father *fp;
                Father fa;
                major ma;
                minor m1;
                fp=&fa;
                fp->show();
                int age;
                cout<<"\n Enter the age:";
                cin>>age;
                if(age>18)
                {
                 
                  fp=&ma;
                  fp->show();
                  }    
                  else
                  {   
                  fp=&m1;
                  fp->show();         
                  }
                  getch();
                  return(0);
                  
                  }                        

