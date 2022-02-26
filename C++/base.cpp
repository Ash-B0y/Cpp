#include<iostream>
#include<conio.h>
using namespace std;

class employee
{

       public:
              int employeeid,basicpay;
              char name[15];

              void details()
              {
                   cout<<"\n Enter the name of the employee:";
                   cin>>name;
                   cout<<"\n Enter the employee's id:";
                   cin>>employeeid;
                   cout<<"\n Enter the basic pay of the employee:";
                   cin>>basicpay;

              }
};


           class teaching:public employee
           {
                public:
                       int pf,CCA,HRA,i;
                       float grosspay;
                       teaching()
                       {
                         CCA=2000;
                         HRA=1000;
                         }

                      void process()
                      {
                          employee::details();
                          grosspay=CCA+HRA+basicpay+basicpay*12.00/100;
                          cout<<"\n\t"<<grosspay;

                          }

                          };

             class nonteaching:public employee

             {

                   public:

                         int i,hrs;
                        float grosspay;  
                    void comp()
                    {
                         employee::details();
                       cout<<"\n Enter the no of extra hours:";
                       cin>>hrs;

                       grosspay=basicpay+hrs*500.00+ basicpay*25.00/100;
                       cout<<"\n\t"<<grosspay;

                       }

                      };



             class technicalassistants:public employee
             {

                   public:
                           int i,hrs;
                         float grosspay;
                    void com()
                    {
                        employee::details();
                       cout<<"\n Enter the no of extra hours:";
                       cin>>hrs;

                       grosspay=basicpay+hrs*1000.00+basicpay*20.00/100;
                       cout<<"\n\t"<<grosspay;

                       }

                      };




                  class clericalassistants:public employee

             {
                   public:
                            int i,days;
                         float grosspay;
                    void p()
                    {
                        employee::details();
                       cout<<"\n Enter the no of days:";
                       cin>>days;

                       grosspay=basicpay+days*500.00+basicpay*20.00/100;
                       cout<<"\n\t"<<grosspay;

                       }

                      };


                      class attenders:public employee

                  {
                   public:
                          int sal;
                          attenders()
                          {
                              sal=10000;

                       }

                      void print()
                      {

                       cout<<sal;
                       }

                      };


                       int main()
                       {
                          int i;
                          teaching t[3];
                          nonteaching nt[3];
                          technicalassistants ta[3];
                          clericalassistants ca[3];
                          attenders a;


                         for(int i=0;i<3;i++)
                         {

                           cout<<"\n Teaching staff:";
                           t[i].process();
                            cout<<"\n non Teaching staff:";

                           nt[i].comp();
                            cout<<"\n Technical staff:";

                           ta[i].com();
                            cout<<"\n clerical staff:";

                           ca[i].p();

                           }

                           a.print();
                           getch();
                           return(0);

                           }




