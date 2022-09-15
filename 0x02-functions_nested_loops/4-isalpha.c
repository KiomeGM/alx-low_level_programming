#include stdio.h
#include stdlib.h

/**
 * _isalpha - checks if an input is an alphabet
 * @c - parameter of integer type
 *
 * Description: utilizes if condition
 * Return: does not return
 */
int _isalpha(int c)
{
    if (c => 'A' && c <= 'z')
     {
         return (1);
     }
    else
     {
         return (0);
     }
}

/**
 * main - function checks if a value is a letter
 * @void - no parameter
 *
 * Description: implements the _isalpha function
 *     and _putchar function
 * Return: always 0
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
