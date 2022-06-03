#include <stdio.h>
int main()
{
   int i,n,sum=0;
   printf("Please provide the value: ");
   scanf("%d",&n);
   printf("\nSo the first %d natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum+=i;
   }
   printf("\nThe total sum of %d terms are: %d \n",n,sum);

   return 0;
}
