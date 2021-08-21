#include <stdio.h>
int main(){
	float num1 , num2 ,num3 ,num4 ;
	printf("Enter four numbers for input : \n");
	scanf("%f%f%f%f",&num1,&num2,&num3,&num4);
	float aver = (num1+num2+num3+num4)/4;
	printf("The average of the four numbers are : %f",aver);
	return 0;
}
