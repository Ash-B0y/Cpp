//stack using singly linked list.
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void push();
void pop();
void peep();
void disp();
struct node
{
	struct node *prev;
	int item;
}*ptr=NULL,*start=NULL;
int x,choice;
int main()
{
	printf("1. push\n2. pop\n3. peep\n4. display\n\n");
	while(1)
	{
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			case 4:
				disp();
				break;
			default:
				printf("Progam terminated.");
				getch();
				return 0;
		}
	}
}
void push()
{
     int z;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
	start=temp;
    temp->prev=ptr;
    printf("Enter the element :");
    scanf("%d",&z);
    temp->item=z;
    ptr=temp;
}
void pop()
{
	if(ptr==NULL)
	printf("Stack is empty.\n");
	else
	{
	struct node *temp;
	printf("%d\n",ptr->item);
	temp=ptr;
	if(ptr==start)
	   ptr=start=NULL;
	else
	   ptr=ptr->prev;
	free(temp);
    }
}
void peep()
{
	if(ptr==NULL)
	printf("Stack is empty.\n");
	else
	printf("%d\n",ptr->item);
}
void disp()
{
	if(ptr==NULL)
	printf("Stack is empty.\n");
	else
	{
		struct node *p,*x=NULL;
		p=ptr;
		while(p!=NULL)
		{
                      struct node *y;
                      y=(struct node *)malloc(sizeof(struct node));
                      y->item=p->item;
                      y->prev=x;
                      x=y;
                      p=p->prev;
        }
		do
		{
			printf("%d  ",x->item);
			x=x->prev;
		}
		while(x!=NULL);
	}
	printf("\n");
}

