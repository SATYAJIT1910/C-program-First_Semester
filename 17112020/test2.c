#include <stdio.h>
void main(){
    int num,i,result;
    printf("Enter a number :\n");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        result=result*i;
    }
    printf("%d",result);
    

    
}