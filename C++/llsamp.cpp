#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node
{
	int data;
	struct node*next;
}*head=NULL,*current=NULL,*prev=NULL,*nxtnode=NULL;

class linkedlist
{
	public:
		void insert()
		{
			int value;
			cout<<"\n\n Enter the value to be stored.....";
			cin>>value;
			struct node *temp;
			temp=new node();
			temp->data=value;
			if(head==NULL)
			{
				head=temp;
				current=temp;
			}
			else
			{
				current->next=temp;
				current=temp;
			}
			
			
		}
		
		void shiftreverse(int k)
		{
	     struct node *currnode=head;
	     int ctr2=0;
	     cout<<"\n\t";
		 while(currnode!=NULL)
		 {	
		 if((ctr2!=k))
		 {	
		 nxtnode=currnode->next;
		 currnode->next=prev;
		 prev=currnode;
		 currnode=nxtnode;
		 ctr2++;
		 if(ctr2==k)
		 {
		  int ctr=0;	
		   head=prev;
	       while(ctr!=k)
			{
			 cout<<head->data<<"\t";
			 head=head->next;
			 ctr++;
			}
			ctr=0;
			ctr2=0;	 
		}	
		 }
	      }
	     }
	
		 
		void display()
		{
			struct node *ptr;	
			ptr=head;
			cout<<"\n Elements present in the list:"<<"\n\t";
			while(ptr!=NULL)
			{
			 cout<<ptr->data<<"\t";
			 ptr=ptr->next;
			}
		}
		
};

int main()
{
	int ch,da;
	linkedlist l1;
	cout<<"\t1. INSERTION AT END...."<<"\n\t2. SHIFT REVERSAL......"<<"\n\t3. DISPLAY.............";
	l1.insert();
	l1.insert();
	l1.insert();
	l1.insert();
	l1.insert();
	l1.insert();
	l1.display();
	l1.shiftreverse(3);
	
	return 0;
}

