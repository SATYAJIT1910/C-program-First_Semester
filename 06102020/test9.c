#include <stdio.h>
void main(){
    int num,i=1,value=0;
    printf("Enter a number : \n");
    scanf("%d",&num);
	while(i<num){
		if(num%i==0){
			value = value + i; 
			
		}
		i=i+1;
	}
if(value==num){
	printf("Perfect number");
}
else{
	printf("Not a perfect number");
}

}
