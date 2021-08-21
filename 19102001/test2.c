#include <stdio.h>
void main()
{
    int n, r = 0;

    printf("Enter a number to reverse\n");
    scanf("%d", &n);
	if (n >= 10){
    	while (n != 0)
        	{
            r = r * 10;
            r = r + n % 10;
            n = n / 10;
        	}

        printf("Reverse of the number = %d\n", r);
    }
    else
    {
        printf("Please enter a two digit number ");
    }
}
