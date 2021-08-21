#include <stdio.h>
void main(){
	int a,b;
	printf("Enter first number :\n");
	scanf("%d",&a);
	printf("Enter second number : \n");
	scanf("%d",&b);
	printf("A value %d & B value %d\n",a,b);
	
	//formula
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("A value %d & B value %d\n",a,b);
	
	
}
