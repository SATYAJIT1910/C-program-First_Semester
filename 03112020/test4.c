#include <stdio.h>
void prime(){
    printf("Enter a number : \n");
    int num,i,flap=0;
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            flap=1;
        }

    }
    if(flap==1){
        printf("Not a prime number");
    }
    else if (flap==0)
    {
        printf("Prime number");
    }
    


}
void main(){
    prime();
}