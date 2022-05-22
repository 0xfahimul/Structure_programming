#include<stdio.h>
int main()
{
	
	int subject1,subject2,subject3,subject4,subject5,aggregate;
	float percentage;
	printf("Enter the number of subject 1: ");
	scanf("%d",&subject1);
	printf("Enter the number of subject 2: ");
	scanf("%d",&subject2);
	printf("Enter the number of subject 3: ");
	scanf("%d",&subject3);
	printf("Enter the number of subject 4: ");
	scanf("%d",&subject4);
	printf("Enter the number of subject 5: ");
	scanf("%d",&subject5);
	
	aggregate=subject1+subject2+subject3+subject4+subject5;
	percentage=aggregate*(100.00/500.00);
	
	printf("Aggregate mark obtained by student=%d\n",aggregate);
	printf("Percentage of student=%.2f",percentage);
	
	
	return 0;
	
}
