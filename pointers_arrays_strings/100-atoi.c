#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: pointer to string s
 * Return: final integer or 0 (if no numbers in string)
 */

int _atoi(char *s)
{
/* keeps track of negative signs */
	int signs = 0;
/* keeps tally of final number */
	unsigned int finalnumber = 0;
/* no numbers counted yet (0); numbers have been counted already (1) */
	int numflag = 0;

/* cycles through each char until end of string */
	while (*s != '\0')
	{
/* checks if char is a number or not */
		if (*s >= '0' && *s <= '9')
		{
/* changes char number to int */
			finalnumber = finalnumber * 10 + (*s - '0');
/* indicates numbers have been counted here */
			numflag = 1;
		}
/* checks if char is a negative sign only if num flag = 0 */
		else if (*s == '-' && !numflag)
		{
			signs = signs + 1;
		}
/* break loop if char is not a number and we already counted numbers */
		else if (numflag == 1)
		{
			break;
		}
		s = s + 1;
	}
/* return 0 if no numbers found in string */
	if (numflag == 0)
	{
		return (0);
	}

/* calculate if signs is a neg or pos */
	if (signs % 2 == 0)
	{
		return (finalnumber);
	}
	else
	{
		return(-finalnumber);
	}
}
