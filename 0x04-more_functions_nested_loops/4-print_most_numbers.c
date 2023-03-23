#include "main."

/**
 * print_most_numbers - print all numbers except 2 & 4
 * Return: 0 (Success)
 */

void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
