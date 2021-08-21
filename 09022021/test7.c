#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter your Name : \n");
    char name[25];
    gets(name);
    int i;
    printf("%c",name[0]);
    for(i=0;name[i]!='\0';i++){
        if(name[i]==' '){
            printf(".");
            printf("%c",name[i+1]);
        }
    }
    return 0;
}