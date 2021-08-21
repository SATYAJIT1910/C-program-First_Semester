#include <stdio.h>
void main(){
    int num,i,j,k=1;
    printf("Enter a number of rows to print :\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++,k++){

            printf("%d ",k);

        }
        printf("\n");
    }

}
