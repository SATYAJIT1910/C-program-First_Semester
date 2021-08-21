#include <stdio.h>
int main(){
    int i;
    float num[5];
    printf("Enter the numbers : ");
    for(i=0;i<5;i++){
        float n1;
        scanf("%f",&n1);
        num[i]=n1;

    }
    //smallest
    float small=num[0];
    for(i=0;i<5;i++){
        if(num[i]<small){
            small=num[i];
        }
    }
    //largest
    float large=num[0];
    for(i=0;i<5;i++){
        if(num[i]>large){
            large=num[i];
        }
    }

    //output
    printf("The largest number is %.2f\n",large);
    printf("The smallest number is %.2f",small);
return 0;
}
