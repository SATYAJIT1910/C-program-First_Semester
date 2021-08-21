#include <stdio.h>
void main()
{
    int arr1[3][2], arr2[3][2], i, j, sum[3][2];
    printf("Enter the values of first matrics :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the values of second matrics :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {

            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\n");
    printf("The sum of two array is \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {

            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}