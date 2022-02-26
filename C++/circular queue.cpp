#include<stdio.h>
#include<conio.h>
void enqueue();
void dequeue();
void display();
int r=-1,f=-1,size,a[100],i;
int main()
{
    int choice;
    printf("Enter the size of the queue : ");
    scanf("%d",&size);
    while(1)
    {
            printf("\n\n1. Enqueue\n2. Dequeue\n3. Display\n\n");
            printf("Enter your choice : ");
            scanf("%d",&choice);
            switch(choice)
            {
                          case 1:
                               enqueue();
                               break;
                          case 2:
                               dequeue();
                               break;
                          case 3:
                               display();
                               break;
                          default:
                               return 0;
            }
   }
}
void enqueue()
{
     int element;
     if((r+1)%size==f)
     printf("Queue is full.");
     else
     {
         printf("Enter an element : ");
         scanf("%d",&element);
         i=(r+1)%size;
         a[i]=element;
         r=i;
         if(f==-1)
         f=r;
     }
}
void dequeue()
{
     if(f==-1)
     printf("Queue is empty.\n");
     else
     {
         printf("%d",a[f]);
         if(f==r)
         f=r=-1;
         else
         f=(f+1)%size;
     }
}
void display()
{
     if(f==-1)
     printf("Queue is empty.");
     else
     {
         i=f;
         while(1)
         {
                 printf("%d  ",a[i]);
                 if(i==r)
                 return;
                 i=(i+1)%size;
                 }
                 }
                 }

