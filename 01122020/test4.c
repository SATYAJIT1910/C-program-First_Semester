#include <stdio.h>
int sum();
void main()
{

    sum();
}
int sum()
{
    int n1, n2, n3;
    printf("Enter three numbers : \n");
    scanf("%d%d%d", &n1, &n2, &n3);
    int result = n1 + n2 + n3;
    printf("%d is the result of %d+%d+%d", result, n1, n2, n3);
}
