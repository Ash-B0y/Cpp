 #include<iostream>
#include<conio.h>
using namespace std;
class length
{
	private:
		float x,deca,cm,tmd,tmc,kilometre,z;
		int c,y,a,b;
    public:
    	length()
    	{
    		deca=0;
    		cm=0;
    	}

        length(float dc,float cmtr) 
		{
			deca=dc;
			cmtr=cm;
		}   	
    void getdata()
    {
    	cout<<"\n"<<"Enter the values of decametre and centimetre:";
    	cin>>deca>>cm;
    	
    
	}
	
	void getdata(float dmtr,float cms)
	{
		deca=dmtr;
		cm=cms;
	}
    
    void process(length sl1,length sl2,length sl3)
    {
    	tmd=sl1.deca*10.00+sl2.deca*10.00+sl3.deca*10.00;
    	tmc=sl1.cm/100.00+sl2.cm/100.00+sl3.cm/100.00;
    	kilometre=(sl1.deca*10.00+sl2.deca*10.00)/1000.00;
    	
    	if(tmc>=1000.00)
    	{
    		x=tmc/1000.00;
    		kilometre+=x;
    		c=tmc;
    		y=c%1000;
    		tmc=y;
    	}
    	else if(tmd>=1000.00)
    	{
    		z=tmd/1000.00;
    		kilometre=z;
    		a=tmd;
    		b=a%1000;
    		tmc+=b;
    	}
    	
}
    void display()
    {
    
    cout<<"\n"<<kilometre<<" kilometre "  <<tmc<<" meter ";
    }
		
};



 int main()
 {
 	length l1,l3,l4;
 	l1.getdata();
 	length l2(20,6);
 	l3.getdata(50,7);
 	l4.process(l1,l2,l3);
 	l4.display();
 	return 0;
 	getch();
 
 
 }
