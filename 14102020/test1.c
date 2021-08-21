#include <stdio.h>
void main(){
	int num1,result;
	printf("Enter the number : \n");
	scanf("%d",&num1);
	if(num1%2==0){
		result = num1/2;
		
	}
	else{
		result = num1*3;
	}
	printf("The result is %d",result);
}
