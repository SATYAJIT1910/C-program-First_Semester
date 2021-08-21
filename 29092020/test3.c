#include <stdio.h>
void main(){
    int i=1;
    int evensum=0;
    int oddsum = 0;
for(i=1;i<=20;i=i+1){
    if(i%2==0){
        printf("%d is a even number\n",i);
        evensum = evensum + i;

    }
    else{
        printf("%d is a odd number\n",i);

        oddsum = oddsum + i;
    }
}

printf("The sum of even values %d & odd values %d",evensum,oddsum);
}
