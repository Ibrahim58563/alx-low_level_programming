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
