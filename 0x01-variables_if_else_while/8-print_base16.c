#include <stdio.h>
#include <ctype.h>
int main()
{
	/*
	 * a program that prints all the numbers of base 16 in lowercase, followed by a new line.
	 */

	int x = 0;
	char alpha[] = "0123456789ABCDEF";
	
	while (alpha[x])
	{
		putchar(tolower(alpha[x]));
		x++;
	}
	putchar ('\n');
	return (0);
}
