#include <Stdio.h>
void main(){
	int i,num1,square;
	while(1){
		printf("Enter the number : \n");
		scanf("%d",&num1);
		square = num1*num1;
		printf("%d\n",square);
		printf("Enter 0 for exit or 1 for continue :\n");
		scanf("%d",&i);
	if(i==0){
		break;
		}
		
	}
}
