#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - program that prints _putchar
 * @void: no input
 *
 * Description: this program uses printf
 * Return: returns void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
