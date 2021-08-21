#include <stdio.h>
int i, elements;
void squre(int num[]);
int main()
{
    printf("Enter number of element you want : ");
    scanf("%d", &elements);

    int num[elements];
    printf("Enter the numbers : ");
    for (i = 0; i < elements; i++)
    {
        int n1;
        scanf("%d", &n1);
        num[i] = n1;
    }
    squre(num);
    return 0;
}
void squre(int num[])
{
    for (i = 0; i < elements; i++)
    {
        printf("%d\n", num[i] * num[i]);
    }
}