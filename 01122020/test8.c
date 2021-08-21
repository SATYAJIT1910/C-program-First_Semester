#include <stdio.h>
int fact(int);
void main(){
    int i;
    printf("Enter the number : ");
    scanf("%d",&i);
    int result=fact(i);
    printf("The factorial of %d is %d",i,result);
}
int fact(int i){
    if(i==0){
        return 1;
    }
    else{
        return i*fact(i-1);
    }




}