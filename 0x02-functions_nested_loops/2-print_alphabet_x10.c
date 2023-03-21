#include <stdio.h>
/**
 * main - start of the program Entry point
 *
 * Description: program that prints alphabet 10 times,
 * in lowercase, followed by a new line
 *
 * return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int x = 0;
while (x < 10)
{
print_alphabet();
x++;
}
}
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
printf("%c", ch);
printf("\n");
ch++;
}
}

int main(void)
{
print_alphabet_x10();
return (0);
}
