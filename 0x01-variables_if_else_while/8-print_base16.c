#include <stdio.h>
#include <ctype.h>
int main()
{
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
