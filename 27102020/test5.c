#include <stdio.h>
void main(){
    int gender=0,Qualification=0;
    int year=0,salary=0;
    printf("Enter the Gender\n1 = Male , 2 = Female\n");
    scanf("%d",&gender);
    printf("Enter the Year of service:\n");
    scanf("%d",&year);
    printf("Enter the Qualfication\n 1 = Post graduate \t 2 = Graduate\t");
    scanf("%d",&Qualification);

    //conditions for salary

    if(gender==1 && year>=5 && Qualification==1){
        salary = 15000;
        printf("The salary will be %d",salary);
    }
    else if(gender==1 && year<5 && Qualification==1){
        salary=12000;
        printf("The salary will be %d",salary);
    }
    else if(gender==1 && year>=5 && Qualification==2){
        salary=12000;
        printf("The salary will be %d",salary);
    }
    else if(gender==2 && year>=5 && Qualification==1){
        salary = 20000;
        printf("The salary will be %d",salary);
    }
    else if(gender==2 && year<5 && Qualification==1){
        salary=15000;
        printf("The salary will be %d",salary);
    }
    else if(gender==2 && year>=5 && Qualification==2){
        salary=15000;
        printf("The salary will be %d",salary);
    }
    else{
        printf("Invaild combinations");
    }
    
    
}
    