#include "main.h"

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
*/

void print_alphabet(void)
{
	int j;

	for (j= 'a' ; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar ('\n');
}
