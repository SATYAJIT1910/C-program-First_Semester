#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter a string : \n");
    char string[100];
    gets(string);
    int len=strlen(string);
    for(int i=0;i<=len;i++){
        for(int j=0;j<i;j++){
            printf("%c",string[j]);
        }
        printf("\n");
    }
    return 0;
}