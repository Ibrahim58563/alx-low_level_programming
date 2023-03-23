#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * Return: 0 (Success)
 */

void more_numbers(void)
{
int x;
for (int j = 0; j < 10; j++)
{
for (int i = 0; i <= 14; i++)
{
x = i;
if (i > 9)
{
putchar(1 + 48);
x = i % 10;
}
putchar(x + 48);
}
putchar('\n');
}
}


