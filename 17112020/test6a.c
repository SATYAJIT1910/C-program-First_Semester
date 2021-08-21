#include <stdio.h>
void main()
{
    int num, i, j;
    printf("Enter a number : \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if(j<=i){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }
}