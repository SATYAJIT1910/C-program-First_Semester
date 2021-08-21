#include <stdio.h>
void main(){
	int a,b,c=0;
	printf("Enter first number :\n");
	scanf("%d",&a);
	printf("Enter second number : \n");
	scanf("%d",&b);
	
	
	printf("A value %d & B value %d\n",a,b);
	c=b;
	b=a;
	a=c;
	printf("A value %d & B value %d\n",a,b);
	
	
}
