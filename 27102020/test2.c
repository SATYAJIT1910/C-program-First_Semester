#include<stdio.h>
void main(){
    printf("Enter the basic salary : \n");
    int bsalary,DA,HRA,Gsalary;
    scanf("%d",&bsalary);
    if(bsalary>=10000){
        DA=(90*bsalary)/100;
        HRA=(30*bsalary)/100;
        Gsalary=bsalary+DA+HRA;

    }
    else
    {
    DA=(80*bsalary)/100;
    HRA=(20*bsalary)/100;
    Gsalary=bsalary+DA+HRA;
    }
    printf("Gross Salary = %d",Gsalary);
}