#include "main.h"
/**
* main - start of the program Entry point
*
* Description: program that checks for letter c
*
* return: Always 0 (Success)
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
