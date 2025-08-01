#include "main.h"
#include <unistd.h> /* for read,write,close */
#include <stdlib.h> /* for NULL */
#include <fcntl.h> /* for open */
#include <string.h> /* for strlen */

/**
 * create_file - creates a file
 * @filename: pointer to name of file to create
 * @text_content: pointer to string to be written to file
 *
 * Return: 1 (success) or -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	ssize_t byteswritten; /* to check if write sys call fails */

	if (filename == NULL) /* error if filename is NULL */
		return (-1);

	/* open or create new file with required persmissions */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1) /* error if open syscall fails */
		return (-1);

	if (text_content == NULL) /* if text_content is NULL, close file */
	{
		close(fd);
		return (1);
	}

	else /* else write text_content to file */
		byteswritten = write(fd, text_content, strlen(text_content));

	if (byteswritten == -1) /* error if write sys call fails */
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
