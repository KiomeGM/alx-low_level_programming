#include "main.h"

/**
* main - function prints text as output
*
* Description:
* Return:return 0
*/
int main(void)
{
	char sch[10] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(sch[i]);
	}

	_putchar(10);
	return (0);
}
