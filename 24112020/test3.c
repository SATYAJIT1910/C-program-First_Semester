/*  5
   45
  345
 2345
12345
 2345
  345
   45
    5

    */



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
            if(num-i<j){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }
    
        for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if(j>i){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }
}
