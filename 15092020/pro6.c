#include <stdio.h>
int main(){
	int m , y;
	y = 5;
	m = y++;
	printf("The value of m in first case: %d\n",m);
	y = 7;
	m = ++y;
	printf("The value of m in second case: %d",m);
	return 0;
}
