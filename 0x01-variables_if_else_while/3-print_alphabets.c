#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
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
