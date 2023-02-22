#include "main.h"

/**
 * jack_bauer -> prints every minute of the day
*/
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
	}
}
