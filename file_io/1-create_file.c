#include "main.h"

/**
 *_strlen - len of a string
 *@str: entry string
 *Return: n°of char
 */

int _strlen(char *str)
{
	int cont;

	for(cont = 0; str[cont] != '\0'; cont++)
		;

	return (cont);
}

/**
 *create_file - create a new file
 *@filename: file name
 *@tex_content: content of the file
 *Return: 1 success -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int fl, w;
	char *text;

	if (!filename)
		return (-1);

	fl = open(filename, O_CREAT | O_RDWR);
	if(fl == -1)
		return (-1);

	if (!text_content)
	{
		close(fl);
		return (1);
	}

	text = strdup(text_content);
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
	return (1);
}

