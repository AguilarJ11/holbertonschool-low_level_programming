#include <unistd.h>

/**
 *main - descripcion
 *Return: descripcion
 *@c: description
 */

int _putchar(char c);

int main(void)
{
	char c;
	char cc;

	c  = _putchar(cc);

	return (0);
}

/**
 *_putchar - description
 *@c: description
 *Return: description
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
