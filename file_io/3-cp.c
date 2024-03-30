#include "main.h"

/**
 *a_errormen - print error mensj
 *@fd: entry filedescriptor
 *@error: entry error number
 *@arg: entry argument value
 */

void a_errormen(int fd, int error, char *arg)
{
	switch (error)
	{
		case 98:
			dprintf(fd, "Error: Cant't read from file %s\n", arg[1]);
			exit(error);
			break;
		case 99:
			dprintf(fd, "Error: Can't write to %s\n", arg[2]);
			exit(error);
			break;
		default:
			break;
	}

}

/**
 *_errormen - print error menj
 *@fd: entry filedescriptor
 *@error: error number
 */

void _errormen(int fd, int error)
{
	switch (error)
	{
		case 97:
			dprintf(fd, "Usage: cp file_from file_to\n");
			exit(error);
			break;
		case 100:
			dprintf(fd, "Error: Can't close %i\n", fd);
			exit(error);
}

/**
 *main - copy a file
 *@argc: n° of arguments
 *@argv: content of the argumens
 *Return: 0 success -1 error
 */

int main(int argc, char *argv[])
{
	int f1, f2, r, w;
	char *text[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!argv[2])
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", argv[1]);
		exit(98);
	}
	f1 = open(argv[1], O_RDWR);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 == -1)
	{
		close(f1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	r = read(f1, text, 1024);
	if (r == -1)
	{
		close(f1);
		close(f2);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	w = write(f2, text, r);
	if (w == -1)
	{
		close(f1);
		close(f2);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(f1);
	close(f2);
	return (0);
}

