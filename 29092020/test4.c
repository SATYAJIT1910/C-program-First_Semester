#include <stdio.h>
void main(){
	int j,i,result=1;
	printf("Enter the number for factorial : \n");
	scanf("%d",&j);
	for(i=1;i<=j;i=i+1){
	result = result*i;
		
	}
	printf("The result is %d",result);
}
