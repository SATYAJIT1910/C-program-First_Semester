#include <stdio.h>
int fact(int num);
void main(){
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    int result=fact(num);

    printf("The factorial of %d is %d",num,result);

}
int fact(int num){
    int i,result;
    for(i=num;i>=1;i--){
        result=result*i;
    }
    return result;

}