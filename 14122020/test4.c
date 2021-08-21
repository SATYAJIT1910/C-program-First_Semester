#include <stdio.h>
void main(){
    int num,i,j,k=1;
    printf("Enter a number :\n");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        for(j=i;j>=1;j--){

            printf("%c ",j+64);

        }
        printf("\n");
    }

}