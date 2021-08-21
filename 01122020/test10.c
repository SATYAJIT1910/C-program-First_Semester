#include <stdio.h>

void swap(int *pr1,int *pr2)
{

    int c;
    c = *pr1;
    *pr1 = *pr2;
    *pr2 = c;
}
void main()
{ 
    int a = 10, b = 15;
    printf("Enter value for a= ");
    scanf("%d",&a);
    printf("Enter value for b= ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping a= %d\n", a);
    printf("After swapping b= %d\n", b);
}