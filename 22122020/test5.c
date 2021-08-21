#include <stdio.h>
void main()
{
    int i, j,k,result[3][3], arr1[3][3], arr2[3][3];
    printf("Enter a 3x3 matrix :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter second 3x3 matrix :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    //logic

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j]=0;
            for(k=0;k<3;k++){
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }


    //////
    printf("The multiplexion of two matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    




}