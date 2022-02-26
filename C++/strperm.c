#include <stdio.h>
#include <string.h>
int count=0;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp; 
}
 
   
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     {
	 printf("%s\n", a);
	 ++count;
     }
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); 
       }
   }
   
}
 
int main()
{
    char str[20];
    printf("Enter any String:");
    scanf("%s",str);
    printf("\n The Possible permutations of the given String are:");
	int n = strlen(str);
    permute(str, 0, n-1);
   printf("\n The total permutations for the given String =");
   printf("%d",count);
    return 0;
}


