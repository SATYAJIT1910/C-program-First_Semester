#include <stdio.h>
void main(){
	int num,remainder,sum=0;
	printf("Enter a 3 digit number : \n");
	scanf("%d",&num);
	int temp = num;
	while(num!=0){
		remainder=num%10;
		sum = sum+(remainder*remainder*remainder);
		num = num/10;
	}
	if(temp==sum){
		printf("Armstrong number");
	}
	else{
		printf("Not an armstrong number");
	}
}
