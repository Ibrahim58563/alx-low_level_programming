#include "main.h"
/**
* _islower - start of the program Entry point
* @c: integer for check
* Return: Always 0 (Success)
*/
int _islower(int c)
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
