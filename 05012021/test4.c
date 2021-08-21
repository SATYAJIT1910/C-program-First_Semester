#include <stdio.h>
void main(){
    printf("Enter a character : ");
    char charc;
    scanf(" %c",&charc);
    int ascii = charc;
    if(ascii>=65 && ascii<=90){
        printf("Capital Letter");
    }
    else if(ascii>=97 && ascii<=122){
        printf("Small letter");
    }
    else if(ascii>=48 && ascii<=57){
        printf("Number");
    }
    else if(ascii>=32 && ascii<=64)
    {
        printf("Special Symbol");
    }
    
   
}