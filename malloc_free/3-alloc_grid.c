#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */
/**
 * alloc_grid - returns pointer to 2D array of ints
 * @height: height of grid
 * @width: width of grid
 * Return: pointer to 2D array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;/* pointer to a pointer */
	int rowindex = 0, colindex = 0, counter = 0;

	if (height <= 0 || width <= 0)/* return NULL if height/width <= 0 */
		return (NULL);
	grid = malloc(sizeof(int *) * height);/* malloc for array of pointers */
	if (grid == NULL) /* if malloc fails, free & NULL */
	{
		free(grid);
		return (NULL);
	}
	while (rowindex < height)/* malloc for each row with a loop */
	{
		grid[rowindex] = malloc(sizeof(int) * width);

		if (grid[rowindex] == NULL)/* if malloc fails, free and NULL */
		{
			while (counter < rowindex)/* free prior malloc'd rows */
			{
			free(grid[counter]);
			counter = counter + 1;
			}
			free(grid);/* then free the array of pointers */
			return (NULL);
		}
		rowindex = rowindex + 1;
	}
	while (rowindex < height) /* initialise each element of grid to 0 */
	{
		colindex = 0;
		while (colindex < width)
		{
			grid[rowindex][colindex] = 0;
			colindex = colindex + 1;
		}
		rowindex = rowindex + 1;
	}
	return (grid); /* return pointer to array of pointers */
}
