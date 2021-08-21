#include <stdio.h>
int power(int, int);
void main()
{
    int num, pw;
    printf("Enter the number : \n");
    scanf("%d", &num);
    printf("Enter the power : \n");
    scanf("%d", &pw);
    int result=power(num,pw);
    printf("The result is %d", result);
}
int power(int num,int pw)
{
    if (pw >= 1)
    {
        return num * power(num, pw - 1);
    }
    else{
        return 1;
    }
}