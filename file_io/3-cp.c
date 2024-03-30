#include "main.h"

/**
 *main - copy a file
 *@argc: n° of arguments
 *@argv: content of the argumens
 *Return: 0 success -1 error
 */

int main(int argc, char *argv[])
{
	int f1, f2, r, w;
	char *text;

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

	text = malloc(1024);
	if (!text)
	{
		close(f1);
		close(f2);
		return (-1);
	}

	r = read(f1, text, 1024);
	if (r == -1)
	{
		close(f1);
		close(f2);
		free(text);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	w = write(f2, text, r);
	if (w == -1)
	{
		close(f1);
		close(f2);
		free(text);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close(f1);
	close(f2);
	free(text);

	return (0);
}

