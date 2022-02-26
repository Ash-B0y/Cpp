#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20];
	char b[]={'n','o','t',' '};
	int i;
	printf("Enter the string:\n");
	gets(a);
	if((a[0]=='n')&&(a[1]=='o')&&(a[2]=='t'))
		{
			
				strcat(b,a);
				printf(b);
			
		}
		
		else
				{
					strcat(b,a);
					printf(b);
				}
getch();
	
}
