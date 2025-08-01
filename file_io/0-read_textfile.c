#include "main.h"
#include "stdio.h" /* for NULL */

/**
 * read_textfile - reads a txt file and prints it to POSIX stdout
 * @filename: pointer to file to read and print
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed or 0 (failure)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesread; /* keep track of bytes read */
	char buffer[1024]; /* buffer to hold read contents of file */
	int i = 0; /* track position in buffer */

	if (*filename == NULL) /* return 0 if filename is NULL */
	{
		return (0);
	}

	int fd = open(*filename, O_RDONLY) /* open file and obtain FD */

		if (fd == -1) /* return 0 if open fails */
		{
			return (0);
		}

	bytesread = read(fd, buffer, sizeof(buffer));/* read file into buffer */

	if (bytesread == -1) /* return 0 if read fails */
	{
		return (0);
	}

	while (i < bytesread) /* loop through chars in buffer */
	{
		_putchar(buffer[i]); /* print from buffer to stdout */
		i++;
	}

	close(fd); /* close fd */

	return (bytesread); /* return number of letters read */
}
