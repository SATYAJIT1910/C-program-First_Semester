#include <stdio.h>
int main()
{
	int num1;
	int num2;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	int sum , div , multi,remain,subs;
	sum = num1 + num2;
	subs = num1 - num2;
	div = num1 / num2;
	multi = num1 * num2;
	remain = num1 % num2;
	
	printf("The sum of two integers is : %d\n",sum);
	printf("The subtraction of two integers is : %d\n",subs);
	printf("The division of two integers is : %d\n",div);
	printf("The multiplication of two integers is : %d\n",multi);
	printf("The remainder of two integers is : %d\n",remain);
	return 0;
}
