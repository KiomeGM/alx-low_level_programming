#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	/*
	 * program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
	 */

	int x = 0;
	int y = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (alpha[x])
	{
		putchar(tolower(alpha[x]));
		x++;
	}

	while (alpha[y])
	{
		putchar(alpha[y]);
		y++;
	}

	putchar ('\n');

	return (0);
}
