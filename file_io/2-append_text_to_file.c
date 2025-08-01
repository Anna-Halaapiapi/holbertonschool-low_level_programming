#include "main.h"
#include <unistd.h> /* for read,write,close */
#include <stdlib.h> /* for NULL */
#include <fcntl.h> /* for open */

/**
 * append_text_to_file - appends text at end of file
 * @filename: pointer to name of file
 * @text_content: pointer to string to add to end of file
 *
 * Return: 1 (success) or -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	ssize_t byteswritten; /* to check if write syscall fails */

	if (filename == NULL) /* error if file name is NULL */
	{
		return (-1);
	}

	fd = open(filename, O_APPEND); /* open required file */

	if (fd == -1) /* error if sys call fails */
		return (-1);

	if (text_content == NULL) /* close file if text content is NULL */
	{
		close(fd);
		return (1);
	}
	else /* else append text to end of file */
		byteswritten = write(fd, text_content, sizeof(text_content) - 1);

	if (byteswritten == -1) /* error if write sys call fails */
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
