#include <stdio.h>

void fib();
void main()
{

	fib();
}
void fib()
{
	int i, n = 21, n1 = 0, n2 = 1, nextTerm;
	for (i = 1; i <= n; ++i)
	{
		printf("%d ", n1);
		nextTerm = n1 + n2;
		n1 = n2;
		n2 = nextTerm;
	}
}