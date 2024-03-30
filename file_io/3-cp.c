#include "main.h"

/**
 *_strlen - len of a string
 *@str: entry string
 *Return: n°of char
 */

int _strlen(char *str)
{
	int cont;

	for (cont = 0; str[cont] != '\0'; cont++)
		;

	return (cont);
}

/**
 *_strdup - copy a string
 *@str: entry string to copy
 *Return: new copy of the entry string
 */

char *_strdup(char *str)
{
	char *cstr;
	int len;
	int cont;

	len = _strlen(str);
	cstr = malloc(len + 1);
	if (!cstr)
		return (NULL);

	for (cont = 0; str[cont] != '\0'; cont++)
		cstr[cont] = str[cont];

	return (cstr);
}

/**
 *main - copy a file
 *@argc: n° of arguments
 *@argv: content of the argumens
 *Return: 0 success -1 error
 */

int main(int argc, char *argv[])
{
	int fl, r, w;
	char *text;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to");
		exit(97);
	}

	if (!argv[2])
	{
		dprintf(STDERR_FILENO,"Error: Cant't read from file %s", argv[2]);
		exit(98);
	}

	fl = open(argv[2], O_RDWR);
	if (fl == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s", argv[2]);
		exit(98);
	}


	if (!text)
		return (-1);

	w = write(fl, text, _strlen(text));
	if (w == -1)
	{
		close(fl);
		free(text);
		return (-1);
	}

	close(fl);
	free(text);
}

