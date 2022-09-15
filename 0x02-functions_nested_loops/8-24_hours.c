#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * @void: no parameter
 *
 * Description: prints every minute of the day of Jack Bauer,
 *          starting from 00:00 to 23:59. Implements nested
 *             for loop and if-else conditionals
 * Return: a value that has been converted to absolute
 */
void jack_bauer(void)
{
    int h;
    int m;

    for (h = 0; h <= 23; h++)
    {
        for (m = 0; m <= 59; m++)
        {
            if (h < 10 && m < 10)
            {
                printf("0%d:0%d", h, m);
            }
            else if (h < 10 && m >= 10)
            {
                printf("0%d:%d", h, m);
            }
            else if (h >= 10 && m < 10);
            {
                printf("%d:0%d", h, m);
            }
            else if (h >= 10 && m >= 10)
            {
                printf("%d:%d", h, m);
            }
        }
    }

    return (0);
}
