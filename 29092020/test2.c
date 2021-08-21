#include <stdio.h>
/*Satyajit Ghosh*/
void main(){
	int num1,num2,num3;
	printf("Enter the three numbers : \n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if (num1- num2>0 && num1-num3>0 ){
		printf("%d is the greatest number",num1);
	}
	else{
		if(num2-num3>0){
			printf("%d is the greatest number",num2);
		}
		else{
			printf("%d is the greatest number",num3);
		}
	
	}
	
}
