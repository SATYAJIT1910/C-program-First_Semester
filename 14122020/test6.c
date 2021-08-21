#include <stdio.h>
int naturalsum(num);
void main(){

    printf("The result is %d",naturalsum(20));

}
int naturalsum(num){
    while(num>=1){
    return num+naturalsum(num-1);
    }
}