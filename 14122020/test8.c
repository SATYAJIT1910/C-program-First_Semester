#include <stdio.h>
int sum(int);
void main(){
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    int result=sum(num);
    printf("The sum of %d number digits is %d",num,result);


}
int sum(int num){
    int result=0;
    int rem=num%10;
    while(num>0){
    return rem+sum(num/10);
    }


}