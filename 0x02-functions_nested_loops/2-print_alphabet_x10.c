#include "main.h"
/**
 * print_alphabet_x10 - Read charcters and prints using _char
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10 (void)
{
  int i;
  for (i = 1; i <= 10; i++)
  {
      char ch = 'a';
      while (ch <= 'z')
      {
	      _putchar(ch);
	      ch++;
      }
      _putchar('\n');
 }
}
