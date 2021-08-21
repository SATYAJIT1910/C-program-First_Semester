#include <stdio.h>
void main(){
    int num,i,arr[4];
    printf("Enter a four digit number : ");
    scanf("%d",&num);
    for(i=0;i<=3;i++){
        arr[i]=num%10;
        num=num/10;

    }
    int result=arr[0]+arr[3];

    printf("Sum of first and last digit is %d",result);

}