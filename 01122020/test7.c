#include <stdio.h>
void largefinder(int n1,int n2,int n3);
void main(){
    int n1,n2,n3;
    printf("Enter three numbers :\t");
    scanf("%d%d%d",&n1,&n2,&n3);
    largefinder(n1,n2,n3);
}
void largefinder(int n1,int n2,int n3){
    if(n1==n2 && n1==n3){
        printf("they are equal");
    }
    else if(n1==n2){
        printf("first number and second number is equal");
    }
    else if(n2==n3){
        printf("second number and third number is equal");
    }
    else if(n1==n3){
        printf("first number and third is equal");
    }
    else if(n2>n1 && n2>n3){
        printf("%d is largest",n2);

    }
    else if (n1>n2 && n1>n3)
    {
        printf("%d is largest",n1);

    }
    else if(n3>n1 && n3>n2){
         printf("%d is largest",n3);
        
    }
    
    

}