#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n%10;
	if (n>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n , lastDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}