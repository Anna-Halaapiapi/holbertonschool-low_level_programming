/**
 * reverse_array - reverse content of an array of integers
 * @a: pointer to array of ints
 * @n: number of ints in array
 * Return:void
 */

void reverse_array(int *a, int n);

{
	int length;

/* save start address of array */
	int *start = a;

/*  find length of array, a pointer moves to null */
	while (*a != '\0')
	{
		length = length + 1;
		a = a + 1;
	}
/* bring pointer back 1 from null */
	a = a - 1;

/* print numbers in reverse */
	while (a >= start)
	{
		_putchar(*a);
		a = a - 1;
	}
}
