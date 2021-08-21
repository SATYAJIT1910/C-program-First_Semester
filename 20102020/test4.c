#include <stdio.h>
void main(){
    float num,result=0,i;
    printf("Enter a number : \n");
    scanf("%f",&num);
    for(i=3;i<=num;i=i+2){
        float cal =(i*i)/(i*i*i);
        result= result+cal;
        
    }
    printf("%f",result+1);
}