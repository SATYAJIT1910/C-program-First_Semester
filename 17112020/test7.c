#include <stdio.h>
void main()
{
    int num, square, choice;

    do
    {
        printf("Enter a number : \n");
        scanf("%d", &num);
        square = num * num;
        printf("Result is %d\n", square);
        printf("Choice 1 for restart 0 for exit\n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            break;
        }
        else
        {
            if(choice==1){
                continue;
            }
            else{
                printf("Invaild Input , existing program");
                break;
            }
        }
        

    } while (1);
}