#include <stdio.h>
/**
 * main - entry point
 *
 * resulut - Always 0 (Success)
 */
int main(void)
{
	char a = 'A';
	int b = 120;
	float c = 123.0f;
	double d = 1222.90;
	char str[] = "Hello";

printf("\nSize of a: %ld", sizeof(a));
printf("\nSize of b: %ld", sizeof(b));
printf("\nSize of c: %ld", sizeof(c));
printf("\nSize of d: %ld", sizeof(d));
printf("\nSize of str: %ld", sizeof(str));
return (0);
}

