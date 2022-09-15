#include stdio.h
#include stdlib.h

/**
 * _islower - function checks case of a character
 * @c - parameter of type int
 *
 * Description: utilizes nested if conditions
 * Return: does not return
 */
 int _islower(int c)
 {
     if(c => 'a' && c <= 'z')
     {
         return (1);
     }
     else
     {
         return (0);
     }
 }

/**
* main - function checks case of a character
* @void - no parameter
*
* Description: implements the _islower function
*     and _putchar function
* Return: always 0
*/
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
