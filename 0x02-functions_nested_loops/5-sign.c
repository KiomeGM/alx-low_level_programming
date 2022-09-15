#include "main.h"

/**
 * print_sign - checks the positivity of an integer
 * @n: parameter of integer type
 *
 * Description: utilizes if-else condition
 * Return: returns either   1 (for positive number)
 *                          0 (for neutral number)
 *                          -1 (for negative number)
 */
int print_sign(int n)
{
    int n;

    if (n > 0)
    {
        putchar('+');
        return (1);
    }
    else if (n == 0)
    {
        putchar('0');
        return (0);
    }
    else
    {
        putchar('-');
        return (-1);
    }
}
