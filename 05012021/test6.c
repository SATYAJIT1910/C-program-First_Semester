#include <stdio.h> 
int gcd(int a, int b);
int lcm(int a, int b);

int main() 
{   int num1,num2;
    printf("Enter two numbers :\n");
    scanf("%d%d",&num1,&num2);
    printf("The GCD value is %d & LCM is %d",gcd(num1,num2),lcm(num1,num2));


	return 0; 
} 

int gcd(int a, int b) 
{ 
	if (a == 0)
		return b; 
	return gcd(b % a, a); 
} 

 
int lcm(int a, int b) 
{ 
	return (a / gcd(a, b)) * b;
} 