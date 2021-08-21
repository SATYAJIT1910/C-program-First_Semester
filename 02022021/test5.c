#include <stdio.h>
int main(){
     //taking input
     int i,roll,marks,students[5][5];
     for(i=0;i<5;i++){
         printf("Enter the roll number :\n");
         scanf("%d",&roll);
         students[i][0]=roll;
         printf("Enter the Marks : ");
         scanf("%d",&marks);
         students[i][1]=marks;
     }

     //output

     printf("\n\n");
     for(i=0;i<5;i++){
        printf("Roll no. : %d \t Marks : %d\n",students[i][0],students[i][1]);
     }
    return 0;
}