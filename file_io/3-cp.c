#include "main.h"
#include <stdio.h> /* printf */
#include <stdlib.h> /* exit */
#include <unistd.h> /* open */
#include <fcntl.h> /* open flags */
#include <sys/types.h> /* ssize_t */

/**
 * exit_97 - display error message and exit with code 97
 *
 * Return: void
 */
void exit_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * exit_98 - display error message and exit with code 98
 * @arg: argument passed from main
 * @from_fd: file descriptor of from file to close (or -1 to skip)
 * @to_fd: file descriptor of to file to close (or -1 to skip)
 *
 * Return: void
 */
void exit_98(char *arg, int from_fd, int to_fd)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
	if (from_fd != -1)
	{
		close(from_fd);
	}
	if (to_fd != -1)
	{
		close(to_fd);
	}
	exit(98);
}

/**
 * exit_99 - display error message and exit with code 99
 * @arg: argument passed from main
 * @from_fd: file descriptor of from file to close (or -1 to skip)
 * @to_fd: file descriptor of to file to close (or -1 to skip)
 *
 * Return: void
 */
void exit_99(char *arg, int from_fd, int to_fd)
{
	if (from_fd != -1)
	{
		close(from_fd);
	}
	if (to_fd != -1)
	{
		close(to_fd);
	}
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
	exit(99);
}

/**
 * exit_100 - display error message and exit with code 100
 * @fd: file descriptor passed from main
 *
 * Return: void
 */
void exit_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - entry point to program
 * Description: program that copies content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success) or 97, 98 ,99 , 100 (fail)
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	char buffer[1024];
	ssize_t bytesread, byteswritten;

	if (argc != 3)
		exit_97();

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		exit_98(argv[1], -1, -1);

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
		exit_99(argv[2], from_fd, -1);

	while (1)
	{
		bytesread = read(from_fd, buffer, sizeof(buffer));
		if (bytesread == -1)
		{
			exit_98(argv[1], from_fd, to_fd);
		}
		if (bytesread == 0)
		{
			break;
		}

		byteswritten = write(to_fd, buffer, bytesread);
		if (byteswritten != bytesread || byteswritten == -1)
		{
			exit_99(argv[2], from_fd, to_fd);
		}
	}
	if (close(from_fd) == -1)
		exit_100(from_fd);
	if (close(to_fd) == -1)
		exit_100(to_fd);
	return (0);
}
