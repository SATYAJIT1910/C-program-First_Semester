#include <stdio.h>
int main(){
    int i;
    float arr[8],sum=0;
    printf("Enter 8 numbers :\n");
    
    for(i=0;i<8;i++){
        scanf("%f",&arr[i]);
    }

    for(i=0;i<8;i++){
        sum=sum+arr[i];

    }
    float average=sum/8;
    printf("The sum of the array is %.2f and the average is %.2f",sum,average);
return 0;
}