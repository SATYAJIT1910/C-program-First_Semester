#include <stdio.h>
void main(){
    int num,i,j,k;
    printf("Enter a number : \n");
    scanf("%d",&num);

    for(i=num;i>=1;i--){

        for(j=num;j>=i;j--){
                printf("%d",j);

        }
        printf("\n");
        }

    printf("\n");
    }
