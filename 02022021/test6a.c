#include <stdio.h>
int main()
{
    int mat1[2][2];
    int mat2[2][2];
    int i, j;

    printf("Enter first matrix : ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter second matrix : ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}