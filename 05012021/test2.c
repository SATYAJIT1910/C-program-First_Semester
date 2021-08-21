#include <stdio.h>
void main(){
    float grade;
    printf("Enter the Grade of student : \n");
    scanf("%f",&grade);
    printf("\n");
    if(grade>=90){
        printf("The grade is A+");

    }
    else if(grade>=80){
        printf("The grade is A");

    }
    else if(grade>=70){
        printf("The grade is B+");

    }
    else if(grade>=60){
        printf("The grade is B");
    }
    else if(grade>=50){
        printf("The grade is C");

    }
    else
    {
        printf("Fail");
    }
    
}