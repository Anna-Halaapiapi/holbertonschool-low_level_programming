#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: pointer to string s
 * Return: final integer or 0 (if no numbers in string)
 */
int _atoi(char *s)
{
	int negsigns = 0;
	unsigned int finalnumber = 0;
	int numflag = 0; /* 0 = no nums cntd yet; 1 = nums counted */

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{ /* converts char string to int */
			finalnumber = finalnumber * 10 + (*s - '0');
			numflag = 1;
		}
		else if (*s == '-' && !numflag)
		{
			negsigns = negsigns + 1;
		}
/* break loop if char is not a num and already counted numbers */
		else if (numflag == 1)
		{
			break;
		}
		s = s + 1;
	}
	if (numflag == 0)
	{
		return (0);
	}
	if (negsigns % 2 == 0) /* calculate if signs is a neg or pos */
	{
		return (finalnumber);
	}
	else
	{
		return (-finalnumber);
	}
}
