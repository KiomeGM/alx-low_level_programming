#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 */
int main(void)
{
	int x = 25;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (x >= 0)
	{
		putchar(tolower(alpha[x]));
		x--;
	}

	putchar ('\n');
	return (0);
}
