#include <stdio.h>
#include <ctype.h>

/**
 * main - convert upper case letters to lowercase
 * and then output one by one using while loop and putchar()
 *
 * Description: uses tolower() function to convert upper alpha to lower
 * using a while loop to iterate over the alphas in the array
 */
int main(void)
{
	int x = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (alpha[x])
	{
		putchar(tolower(alpha[x]));
		x++;
	}
	putchar ('\n');
	return (0);
}
