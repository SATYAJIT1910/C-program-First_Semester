#include<stdio.h>
int main(){
   int num,reverse_number;

   printf("Enter any number:\n");
   scanf("%d",&num);

   reverse_number=reverse_function(num);
   printf("After reverse the no is :%d",reverse_number);
   return 0;
}
int sum=0,rem;
reverse_function(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   return sum;
}