#include <stdio.h>
int main(){
    printf("Enter your Name : \n");
    char name[25];
    gets(name);
    printf("%s",name);

    return 0;
}