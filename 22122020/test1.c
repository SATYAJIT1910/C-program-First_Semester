#include <stdio.h>
int main(){
    int i;
    float arr[10];
    printf("Enter 10 floating numbers :\n");
    
    for(i=0;i<10;i++){
        scanf("%f",&arr[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("%f\n",arr[i]);
    }

    return 0;
}