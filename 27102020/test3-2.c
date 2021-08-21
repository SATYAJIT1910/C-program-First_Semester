#include <stdio.h>
void main()
{
    int s1, s2, s3, fmarks;
    printf("Enter the three subjects number : \n");
    scanf("%d%d%d", &s1, &s2, &s3);
    printf("Enter Full marks ( for one subject)\n");
    scanf("%d", &fmarks);
    int percentage = ((s1 + s2 + s3) * 100) / (fmarks * 3);
    if (percentage >= 60)
    {
        printf("1st Division");
    }
    else
    {
        if (percentage >= 50)
        {
            printf("2nd Division");
        }
        else
        {
            if (percentage >= 40)
            {
                printf("3rd Division");
            }
            else
            {
                printf("Fail");
            }
        }
    }
}
