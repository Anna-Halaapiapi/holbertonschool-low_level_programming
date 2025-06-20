#include "main.h"
/**
 * jack_bauer - prints all minutes of a day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

/* outer hr loop */
	while (h < 24)
	{
/* reset mins at start of each hr */
		int m = 0;
/* inner min loop */
		while (m < 60)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
			m = m + 1;
		}
			h = h + 1;
	}

}
