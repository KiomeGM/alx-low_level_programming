#include <stdio.h>
#include <ctype.h>

/*
 * main - prints the alphabet in lowercase, followed by a new line,
 * while eliminating two letters
 *
 * Description: filter through the text, thereby eliminating a provided
 *      list of text from the initial text, and then converting them to
 *      to lowercase and then outputting it
 */
int main(void)
{
	int x = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (alpha[x])
	{
		if (alpha[x] == 'e')
		{
			x++;
		}
		else if (alpha[x] == 'q')
		{
			x++;
		}
		else
		{
			putchar(tolower(alpha[x]));
			x++;
		}
	}

	putchar ('\n');
	return (0);
}
