#include "main.h"
/**
 * _isalpha - check alphabetic character
 *
 * Return: 1 if c is a letter, otherwise return 0
 *
 * @c: An input character
 */
int _isalpha(int c)
{
char lower, upper;
int letter = 0;
for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
letter = 1;
}
}
return (letter);
}

