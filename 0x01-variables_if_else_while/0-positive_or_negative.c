#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Check if a number is less than, equal to, or more than 0
 * @parameterx: no parameter
 *
 * Description: a random number is generated,
 *      and then checked against 0 to determine
 *      positivity
 * Return: returns void
*/
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
