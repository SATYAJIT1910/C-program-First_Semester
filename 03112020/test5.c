#include <stdio.h>
void main(){
    int num,i,result=0;
    printf("Enter a number : \n");
    scanf("%d",&num);
    for(i=1;i<=num;i=i+2){
        result = result+i;
        printf("%d",i);
        if(i<num-1){
            printf("+");
        }

    }
    printf("=%d",result);
}

