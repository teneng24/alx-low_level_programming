#include "main.h"
/**
 * _islower - Checks for lowercase
 *
 * @c: An input character
 *
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
