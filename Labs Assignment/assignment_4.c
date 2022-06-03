#include <stdio.h>
int main()
{
   int i,j,spec,rows,k,t=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   spec=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spec;k>=1;k--)
            {
              printf(" ");
            }
	   for(j=1;j<=i;j++)
	   printf("%d ",t++);
	printf("\n");
    spec--;
   }

   return 0;
}
