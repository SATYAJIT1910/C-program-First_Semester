#include <stdio.h>
void print(int *ptr, int a);
void main()
{
    int i, j, arr[j], *ptr[j];
    printf("Enter number of elements you want to add in the array \n");
    scanf("%d", &i);
    printf("Now enter %d integers one by one :\n",i);
    for (j = 0; j < i; j++)
    {
        int k;
        scanf("%d", &k);
        arr[j] = k;
    }


    print(arr,i);  
}
void print(int *ptr,int a){
    int j;

    for (j = 0; j < a; j++)
    {
        printf("value of a[%d]=%d\n",j,*ptr);
        ptr=ptr+1;
    }
}