#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int x, y, z;

	x = 0;
	y = 0;
	while (x < 10)
		{
			while (y < 10)
			{
				z = y * x;
				if (y == 0)
				{
					_putchar(z + '0');
				}


				if (z < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				} else if (z >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				y++;
			}
			x++;
			_putchar('\n');
		}
}
