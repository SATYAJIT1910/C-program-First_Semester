#include <stdio.h>
int add(int,int);
int sub(int,int);
int divide(int,int);
int multiply(int,int);
void main(){
    int n1,n2;
    char choice;
    printf("Enter two integers : \n");
    scanf("%d%d",&n1,&n2);
    printf("Enter +,-,/,* for operation :");
    scanf(" %c",&choice);
    switch (choice)
    {
    case '+':
    printf("The result is %d",add(n1,n2));
        break;
    case '-':
    printf("The result is %d",sub(n1,n2));
        break;
    case '/':
    printf("The result is %d",divide(n1,n2));
        break;
    case '*':
    printf("The result is %d",multiply(n1,n2));
        break;
    default:
    printf("Wrong input");
        break;
    }

}
int add(n1,n2){
    return n1+n2;
}
int sub(n1,n2){
    return n1-n2;
}
int divide(n1,n2){
    return n1/n2;
}
int multiply(n1,n2){
    return n1*n2;
}
