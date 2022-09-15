#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * @void: no input
 *
 * Description: use for loop
 * Return: does not return
 */
 void print_alphabet(void)
 {
     char ch;

     for(ch = 'a';ch <= 'z'; ch++)
     {
         putchar(ch);
     }
     putchar('\n');
 }

 /**
  * main - contains print_alphabet function
  * @void: no input
  *
  * Description: the print_alphabet function outputs lowercase alphabets
  * Return: always 0
  */
