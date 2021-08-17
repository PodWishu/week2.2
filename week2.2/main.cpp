#include <stdio.h>

int biggestnum(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return a;
	}
	if (b > a && b > c)
	{
		return b;
	}
	if (c > a && c > b)
	{
		return c;
	}
}

int main()
{
	int a, b, c;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);
	printf("the biggest number = %d", biggestnum(a, b, c));
	return 0;
}