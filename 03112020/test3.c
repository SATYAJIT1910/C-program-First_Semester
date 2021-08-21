#include <stdio.h>
void main(){
    int num,result=0,remainder;
    printf("Enter a number : \n");
    scanf("%d",&num);
    while(num>1){
        remainder=num%10;
        result=result+remainder;
        num=num/10;

    }
    printf("%d",result);
}