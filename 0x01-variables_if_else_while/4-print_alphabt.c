#include <stdio.h>
#include <ctype.h>
int main()
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
