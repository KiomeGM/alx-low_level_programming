#include <stdio.h>
#include <ctype.h>
int main()
{
	/*
	 * This program will convert upper case letters to lowercase
	 * and then outputted one by one using while loop and putchar()
	 */

	int x = 0;
	char alpha [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	while (alpha [x])
	{
		putchar(tolower(alpha [x]));
		x++;
	}
	putchar ('\n');
	return (0);
}
