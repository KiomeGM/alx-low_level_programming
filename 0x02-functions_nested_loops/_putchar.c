#include <unistd.h>

/**
 * _putchar - program that initialises char printing
 * @c: parameter of type char
 *
 * Description: this program uses printf
 * Return: returns void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
