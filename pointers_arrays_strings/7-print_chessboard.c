#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: pointer to array of 8 columns
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;

/* outer loop through rows */
	while (row < 8)
	{

/* inner loop through columns */
		while (col < 8)
		{
			_putchar(*a[row][col]);
			col = col + 1;
		}
		_putchar('\n');
		row = row + 1;
	}
}
