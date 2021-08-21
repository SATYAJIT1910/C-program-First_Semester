#include <stdio.h>
void main(){
    int num,result=0,i;
    printf("Enter a number : \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        result = result+i;
    }
    printf("%d",result);
}