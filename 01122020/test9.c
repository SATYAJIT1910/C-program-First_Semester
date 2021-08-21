#include <stdio.h>
void print();
int arr1[6];
int i,j,num;
void main()
{   printf("Enter the six integers :\n");
    for(j=0;j<6;j++){
        scanf("%d",&arr1[j]);
    }
    print();
}
void print()
{
    
    for(i=0;i<6;i++){
        printf("a[%d] position  value is %d\n",i,arr1[i]);
    }



}