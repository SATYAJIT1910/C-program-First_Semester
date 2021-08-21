#include <stdio.h>
int main(){
    int i;
    float marks[10],sum;
    printf("Enter the marks : ");
    for(i=0;i<10;i++){
        float n1;
        scanf("%f",&n1);
        marks[i]=n1;

    }
    for(i=0;i<10;i++){
        sum+=marks[i];

    }
    float average=sum/10;
    printf("The average of marks is %.2f",average);
    return 0;
}