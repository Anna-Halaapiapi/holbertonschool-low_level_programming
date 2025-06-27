/**
 * reverse_array - reverse content of an array of integers
 * @a: pointer to array of ints
 * @n: number of ints in array
 * Return:void
 */

void reverse_array(int *a, int n)

{
/* declare var to hold a temp value & index positions */

	int temp;
	int startindex = 0;
	int endindex = n - 1;

/* loop to swap numbers in array */
	while (startindex < endindex)
	{
/* put start value in temp */
		temp = a[startindex];

/* put end value in start index posistion */
		a[startindex] = a[endindex];

/* put start value from temp into end index position */
		a[endindex] = temp;

/* increment start index & decrement end index */
		startindex = startindex + 1;
		endindex = endindex - 1;
	}
}
