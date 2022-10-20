#include "main.h"
/**
 * print_alphabet_x10 - print's 10 times the alphabet.
 *
 * Return: lower
 */
void print_alphabet_x10(void)
{
char i;
int lower = 0;
while (lower++ <= 9)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
