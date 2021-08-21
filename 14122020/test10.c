#include <stdio.h>
int num1,num2;

void main(){
    
    printf("Enter two numbers :\n");
    scanf("%d%d",&num1,&num2);
    findmaxmin(&num1,&num2);
}
void findmaxmin(int *ptr1,int *ptr2){
    if(*ptr1>*ptr2){
        printf("MINIMUM = %d\n",*ptr2);
        printf("MAXIMUM = %d\n",*ptr1);
    }
    else{
        printf("MAXIMUM = %d\n",*ptr2);
        printf("MINIMUM = %d\n",*ptr1);
    

    }
}