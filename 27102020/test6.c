#include <stdio.h>
void main()
{
    int num1, num2, userinput, result;
    printf("Enter two number : \n");
    scanf("%d%d", &num1, &num2);
    printf("Enter 1 = Addition 2 = Subtraction 3 = Multiplication 4 = Division\n");
    scanf("%d", &userinput);
    if (num2 == 0 && userinput == 4)
    {
        printf("Cannot Divide by 0");
    }
    else
    {
        switch (userinput)
        {
        case 1:
            result = num1 + num2;
            printf("The result is %d", result);
            break;
        case 2:
            result = num1 - num2;
            printf("The result is %d", result);
            break;
        case 3:
            result = num1 * num2;
            printf("The result is %d", result);
            break;
        case 4:
            result = num1 / num2;
            printf("The result is %d", result);
            break;
        default:
            printf("Invaild Input");
            break;
        }
    }
}