#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
*/

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; < 10 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i++;
			}
			k++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
