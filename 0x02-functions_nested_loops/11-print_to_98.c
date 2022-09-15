#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: parameter of integer type
 *
 * Description: utilizes if-else condition
 * Return: a value that has been converted to absolute
 */
void print_to_98(int n)
{
    int i;

    if (n < 98)
    {
        for (i = n; i <= 98; i++)
        {
            putchar(i);
            putchar(",");
            putchar(" ");
        }

        putchar('\n');
    }
    else if (n == 98):
    {
        putchar(n);
        putchar('\n');
    }
    else if (n > 98)
    {
        for (i = n; i >= 98; i--)
        {
            putchar(i);
            putchar(",");
            putchar(" ");
        }

        putchar('\n');
    }

}
