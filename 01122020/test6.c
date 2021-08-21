#include <stdio.h>
void swap(int a,int b);
void main(){
    int a,b;
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    swap(a,b);

}
void swap(int a,int b){
    int c;//third variable
    c=a;
    a=b;
    b=c;
    printf("Enter first number : %d\n",a);
    printf("Enter second number : %d",b);



}