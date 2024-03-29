#include "main.h"

/**
 *read_textfile - read a file and print 
 *@filename: entry filename
 *@letters: entry n°of char in the file
 *Return: n°of char printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl = 0, r = 0, w = 0;
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


	close(fl);

	return (w);
}

