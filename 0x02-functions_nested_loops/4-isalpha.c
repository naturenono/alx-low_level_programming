#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: a charter to be cheaked on
 * Return: Always 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z')));
}
