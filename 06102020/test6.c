#include <stdio.h>
void main(){
	int num,i,result=0;
	printf("Enter a number : \n");
	scanf("%d",&num);
	for(i=2;i<num;i=i+1){
		if((num%i)==0){
			result = 1;
		}
	}
	
	if(result==1){
		printf("Not a prime number\n");
		
	}
	else{
		printf("Prime number\n");
	}
}
	
		
