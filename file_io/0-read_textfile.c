#include "main.h"
#include <unistd.h> /* for read,write,close */
#include <stdlib.h> /* for NULL */
#include <fcntl.h> /* for open */

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
	ssize_t byteswritten; /* keep track of bytes written */
	char buffer[10000]; /* buffer to hold read contents of file */
	int i = 0; /* track position in buffer */
	int fd; /* file descriptor */

	if (filename == NULL) /* check if filename is NULL */
		return (0);

	fd = open(filename, O_RDONLY); /* open file and obtain fd */

	if (fd == -1) /* return 0 if open fails */
		return (0);

	if (letters > sizeof(buffer)) /* limit letters to size of buffer */
		letters = sizeof(buffer);

	bytesread = read(fd, buffer, letters);/* read file into buffer */

	if (bytesread == -1) /* if read fails */
	{
		close(fd);
		return (0);
	}

	byteswritten = write(STDOUT_FILENO, buffer, bytesread);

	if (byteswritten != bytesread)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (byteswritten); /* return number of letters read */
}
