#include <stdio.h>
int main()
{
   int a,num,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&num);
   printf("\nThe odd numbers are :");
   for(a=1;a<=num;a++)
   {
     printf("%d ",2*a-1);
     sum+=2*a-1;
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",num,sum);


   }
}
