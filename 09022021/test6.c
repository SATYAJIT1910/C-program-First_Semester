#include <string.h>
int main(){
    printf("Enter a string : \n");
    char string[100];
    gets(string);
    int i;
    for(i=0;string[i]!='\0';i++);
    printf("The lenth of string is %d",i);
    return 0;
}