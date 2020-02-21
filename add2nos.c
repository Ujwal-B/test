#include<stdio.h>
void add (int a, int b);
int main ()
{
	int a, b;
	printf("Enter values of 2 numbers:\n");
	scanf("%d %d", &a, &b);
	add (a,b);
	return 0;
}
void add (int a, int b)
{
	printf("Sum is %d\n", a+b);
}
