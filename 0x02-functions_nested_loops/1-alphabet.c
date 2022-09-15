#include <unistd.h>

#include "main.h"


/**
 * print_alphabet -  prints the lowercase alphabet
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */

void print_alphabet(void)

{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');

}
