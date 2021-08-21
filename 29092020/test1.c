#include <stdio.h>
void main(){
	float value,cel,far;
	int i;
	printf("Enter the value for conversion : \n");
	scanf("%f",&value);
	printf("You entered %f\n",value);
	//Formulas
	cel = (value - 32)/1.8 ;
	far = (value * 1.8) + 32 ;
	//decision
	printf("Enter 0 for Fahrenheit to Celsius & 1 for Celsius to Fahrenheit conversion :\n");
	scanf("%d",&i);
	if(i==0){
		printf("Result is %f",cel);
	}
	if(i==1){
		printf("Result is %f",far);
	}
	
	
}
