#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - compares last digit of a number with 5
 *
 * Description: extracts last digit from a randomly
 * generated number and then checks it against some conditions
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 ", n, lastDigit);
        printf("and not 0\n");
	}
	return (0);
}
