#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int x = 25;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (x >=0)
	{
		putchar(tolower(alpha[x]));
		x--;
	}

	putchar ('\n');

	return (0);
}
