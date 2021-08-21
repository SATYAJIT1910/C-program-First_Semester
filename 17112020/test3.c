#include <stdio.h>
void main()
{
   int num, remainder, rev;
   printf("Enter a number : \n");
   scanf("%d", &num);
   int fixednum = num;
   while (num != 0)
   {
      remainder = num % 10;
      rev = rev * 10 + remainder;
      num /= 10;
   }
   printf("The reverse of the number is %d", rev);
}