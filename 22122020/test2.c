#include <stdio.h>
int main()
{
    int i;
    float arr[10], max, min;
    printf("Enter 10 floating numbers :\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &arr[i]);
    }

    //largest
    max=arr[1];
    for(i=1;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    //smallest
    min=arr[1];
    for(i=1;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }


    printf("The largest element of the array is %.2f and the smallest element is %.2f",max,min);

    }
    