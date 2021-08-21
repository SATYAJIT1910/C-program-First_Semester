/*Satyajit Ghosh*/
#include <stdio.h>
void main(){
    int num;
    printf("Enter a number : \n");
    scanf("%d",&num);
    if(num%5==0 || (num%7==0 && num%11 !=0)){
        printf("True condition");
    }
    else{
        printf("False condition");
    }
}