#include <stdio.h>
#include <math.h>
void prime(int);
void armstrong(int,int);
void perfect(int);
int diginumber(int);
void main(){
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);
    prime(num);
    int count=diginumber(num);
    armstrong(num,count);
    perfect(num);
}
void prime(num){

    int i;
    int j=num/2;
    int flap=0;
    for(i=2;i<=j;i++){
        if(num%i==0){
            flap=1;
        }
    }
    if(flap==1){
        printf("It is not a prime number\n");
    }
    else if(flap==0){
        printf("It is a prime number\n");
    }


}
int diginumber(int n1)
{
    int count = 0;
    while (n1 != 0)
    {
        n1 = n1 / 10;
        count = count + 1;
    }
    return count;
}

void armstrong(int num,int count){
    int fixednum=num;
    int r=0;
    while(num!=0){
        int i=num%10;
        num=num/10;
        r=r+pow(i,count);
        
    }
    if(fixednum==r){
        printf("It is an armstrong number\n");
    }
    else{
        printf("It is not an armstrong number\n");
    }
}
void perfect(num){
    int i,r=0;
    for(i=1;i<=num;i++){
        if(num%i==0){
            r=r+i;
        }
    }
    if(num==(r-num)){
        printf("It a perfect number");
    }
    else{
        printf("It is not a perfect number");
    }


}

