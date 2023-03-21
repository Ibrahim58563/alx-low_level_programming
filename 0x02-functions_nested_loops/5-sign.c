#include "main.h"
/**
* print_sign - print + or - or 0
* @n: is a integer number
* Return: 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
_putchar('0');
}
else
{
return (-1);
_putchar('-');
_putchar('-');
}
}
