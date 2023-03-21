#include "main.h"
/**
* main - start of the program Entry point
*
* Description: program that checks for letter c
*
* return: Always 0 (Success)
*/
int _islower(int c);
_islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
