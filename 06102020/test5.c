#include <stdio.h>
void main(){
    int num,i=1;
    printf("Enter a number : \n");
    scanf("%d",&num);
	while(i<=num){
		if(num%i==0){
			printf("%d is a factor of %d\n",i,num);
			
		}
		i=i+1;
	}
}
