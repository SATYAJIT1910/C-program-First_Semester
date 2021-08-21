#include <stdio.h>
int sum(int n1, int n2, int n3);
void main()
{
    int n1, n2, n3;
    printf("Enter three numbers : \n");
    scanf("%d%d%d", &n1, &n2, &n3);
    int output = sum(n1, n2, n3);
    printf("%d is the result of %d+%d+%d", output, n1, n2, n3);
}
int sum(int n1, int n2, int n3)
{

    int result = n1 + n2 + n3;
    return result;
}
