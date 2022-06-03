#include <stdio.h>
int main()
{
    int a,num,sum=0;
	float avg;

	printf("Input the 10 numbers : \n");
	for (a=1;a<=10;a++)
	{
                printf("Number-%d :",a);

		scanf("%d",&num);
		sum +=num;
	}

	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %.2f\n",sum,avg);

    return 0;
}
