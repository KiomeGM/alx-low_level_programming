#include "main.h"

/**
 * _islower - function checks case of a character
 * @c: parameter of type int
 *
 * Description: utilizes nested if conditions
 * Return: does not return
 */
 int _islower(int c)
 {
     int c;

     if(c => 'a' && c <= 'z')
     {
         return (1);
     }
     else
     {
         return (0);
     }
 }

