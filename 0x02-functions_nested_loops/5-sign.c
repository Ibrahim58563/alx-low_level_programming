#include "main.h"
/**
* main - start of the program Entry point
*
* Description: program that checks for letter c
*
* return: Always 0 (Success)
*/
int print_sign(int n){
   if (n > 0)
   {
       return (1);
       putchar('+');
   }
   else if (n == 0)
   {
       return (0);
       putchar('0');
   }
   else
   {
       return (-1);
       putchar('-');
   }
}
