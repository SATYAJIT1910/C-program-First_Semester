#include <stdio.h>
void main(){
    printf("Enter the student name : ");
    char name[50];
    gets(name);
    float mark[5];
    printf("Enter the marks of 5 different subject \n");
    int i;
    float totalmarks;
    for(i=0;i<5;i++){
    scanf("%f",&mark[i]);
    totalmarks=totalmarks+mark[i]; //total marks
    
    }
    //percentage

    float percentange = (totalmarks/500)*100;

    //class of result
    char grade;
    if(percentange>=75){
        grade='A';
    }
    else if(percentange>=35){
        grade='B';
    }
    else if(percentange<35){
        grade='C';
    }

    //outputs

    printf("\n\n");
    printf("The name of the student is : %s\n",name);
    printf("Total marks : %.2f\n",totalmarks);
    printf("The percentage is : %.2f\n",percentange);
    printf("The class of result : %c\n",grade);

    

}