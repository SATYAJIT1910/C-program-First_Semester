#include <stdio.h>
int evenodd(int);
void main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);
    int result = evenodd(num);
    if (result == 1)
    {
        printf("%d is a Even number", num);
    }
    else if (result == 0)
    {
        printf("%d is a Odd number", num);
    }
}
int evenodd(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else if (num % 2 != 0)
    {
        return 0;
    }
}
