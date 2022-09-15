#include stdio.h
#include stdlib.h

/**
 * print_sign - checks the positivity of an integer
 * @n - parameter of integer type
 *
 * Description: utilizes if-else condition
 * Return: returns either   1 (for positive number)
 *                          0 (for neutral number)
 *                          -1 (for negative number)
 */
int print_sign(int n)
{
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

/**
 * main - function checks if a value is positive or not
 * @void - no parameter
 *
 * Description: implements the print_sign function
 *     and _putchar function
 * Return: always 0
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
