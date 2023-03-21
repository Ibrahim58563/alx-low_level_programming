#include "main.h"
/**
 * print_alphabet_x10 - print 10 times
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int x = 0;
while (x < 10)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
x++;
}
}
