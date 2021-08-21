#include <stdio.h>
# define PI 3.14
void function1(float *ptr1,float *ptr2,float *ptr3);
void main()
{
    float radius,perimeter=0,area=0;
    printf("Enter the radius : ");
    scanf("%f", &radius);
    function1(&radius,&perimeter,&area);
    printf("The perimeter is %.2f \n The area is %.2f",perimeter,area);
}
void function1(float *ptr1,float *ptr2,float *ptr3)
{
    *ptr2 = 2 * PI * *ptr1;
    *ptr3 = PI * *ptr1 * *ptr1;
}