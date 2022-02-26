
#include<iostream>
#include<conio.h>
using namespace std;

class time
{
	public:
	    int h,m,s;
		time()
		{
			h=0;
			m=0;
			s=0;
		}
		time(int th,int tm,int ts)
		{
			h=th;
			m=tm;
			s=ts;
		}
		
		void getdata()
		{
			cout<<"\n Enter the time components in the format h:m:s";
			cin>>h>>m>>s;
		}
	    
 friend time operator +(time &ob1, time &ob2);
};
        time operator +(time &ob1, time &ob2)
		{
            time temp;
			temp.h=ob1.h+ob2.h;
			temp.m=ob1.m+ob2.m;
			temp.s=ob1.s+ob2.s;	
			if(temp.s>60)
			{
				temp.s=temp.s-60;
				temp.m++;
			}
			if(temp.m>60)
			{
				temp.m=temp.m-60;
				temp.h++;
			}
			return(temp);
			
		} 


   int main()
   {
   	time t1,t3;
   	t1.getdata();
   	time t2(5,56,35);
   	t3=t1+t2;
   	cout<<"\n\t"<<t3.h<<":"<<t3.m<<":"<<t3.s;
   	getch();
   	return 0;

\
   }
