#include "main.h"

/**
 *read_textfile - read a file and print 
 *@filename: entry filename
 *@letters: entry n°of char in the file
 *Return: n°of char printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	int r, w;
	char *rcat;

	if (!filename)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);

	rcat = malloc(letters);

	r = read(fl, rcat, letters);

	if (r == -1)
	{
		free(rcat);
		close(fl);
		return (0);
	}

	w = write(1, rcat, r);

	if (w == -1)
	{
		free(rcat);
		close(fl);
		return(0);
	}

	close(fl);

	return (w);
}

