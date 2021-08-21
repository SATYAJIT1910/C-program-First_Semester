#include <stdio.h>
void main(){
    int num,i,result=0;
    printf("Enter a number : \n");
    scanf("%d",&num);
    for(i=1;i<=num;i=i+1){
        result = result+(i*i);
        printf("%d",i*i);
            if(i<num){
            printf("+");
        }

    }
    printf("=%d",result);
}