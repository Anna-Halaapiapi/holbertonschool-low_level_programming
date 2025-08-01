#include "main.h"
#include <unistd.h> /* for read,write,close */
#include <stdlib.h> /* for NULL */

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
	int fd; /* file descriptor */

	if (filename == NULL) /* check if filename is NULL */
		return (0);

	fd = open(filename, O_RDONLY); /* open file and obtain fd */

	if (fd == -1) /* return 0 if open fails */
		return (0);

	if (letters > buffer) /* limit letters to size of buffer if greater */
		letters = 1024;

	bytesread = read(fd, buffer, letters);/* read file into buffer */

	if (bytesread == -1) /* if read fails */
		close(fd);
		return (0);

	while (i < bytesread) /* loop through chars in buffer */
	{
		_putchar(buffer[i]); /* print from buffer to stdout */

		if (buffer[i] == -1) /* if write fails */
		{
			close(fd);
			return (0);
		}
		i++;
	}

	close(fd); /* close fd */

	return (bytesread); /* return number of letters read */
}
