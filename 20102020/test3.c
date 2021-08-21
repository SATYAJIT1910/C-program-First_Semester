#include <stdio.h>
void main(){
    float num,result=0,i;
    printf("Enter a number : \n");
    scanf("%f",&num);
    for(i=2;i<=num;i++){
        result=result+(1/i);
        
    }
    printf("%f",result+1);
}