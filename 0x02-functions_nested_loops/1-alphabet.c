#include <stdio.h>
/*
 * main - start of the program Entry point
 *
 * Description: program that prints alphabet,
 * in lowercase, followed by a new line
 *
 * return: always 0 (Success)
*/
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
printf("%c", ch);
printf("\n");
ch++;
}
};
int main(void)
{
print_alphabet();
return (0);
}
