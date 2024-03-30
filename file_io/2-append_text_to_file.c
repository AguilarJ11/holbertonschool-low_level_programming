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
 *append_text_to_file - add text to an exist file
 *@filename: file name
 *@text_content: text to add
 *Return: 1 success -1 fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, w;
	char *text;

	if (!filename)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);

	if (!text_content)
	{
		close(fl);
		return (1);
	}

	text = _strdup(text_content);
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

