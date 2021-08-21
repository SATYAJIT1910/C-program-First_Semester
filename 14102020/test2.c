#include <stdio.h>
void main(){
	int a,b,c;
	printf("Enter the three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c && a==c){
		printf("Three are equal");
	}
	else if(a==b || b==c || a==c){
		printf("Two numbers are equal");
	}
	else{
		printf("Not equal");
	}
}
