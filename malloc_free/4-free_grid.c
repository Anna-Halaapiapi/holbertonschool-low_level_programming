#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */
/**
 * free_grid - frees a 2D array
 * @grid: 2D array
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height);
{
	int rowindex = 0; /* keep track of row index position */

/* free each row */
	while(rowindex < height)
	{
	free(grid[rowindex])
	rowindex = rowindex + 1;
	}
/* free pointer to array of pointers */
	free(grid);
}
