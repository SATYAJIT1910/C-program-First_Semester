#include <stdio.h>
int main(){
    int i;
    int num[4];
    printf("Enter the numbers : ");
    for(i=0;i<4;i++){
        int n1;
        scanf("%d",&n1);
        num[i]=n1;

    }
    printf("\n");
    printf("Enter the position : ");
    int position;
    scanf("%d",&position);
    printf("Enter number to insert in %d th position :",position);
    int number;
    scanf("%d",&number);
    num[position]=number;


    //printing the array
        for(i=0;i<4;i++){
        printf("%d\n",num[i]);

    }
    return 0;

}