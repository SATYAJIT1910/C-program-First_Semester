#include <stdio.h>
int main()
{
	int num1 = 13;
	int num2 = 5;
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
