#include <stdio.h>
#include <math.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *      followed by a new line.
 *
 * Description: uses a for loop to iterate through 0 to 9 and printing them
 * Return: returns void
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}

	putchar('\n');
	return (0);
}
