#include "main.h"

/*
 * *_memcpy - copies memory bytes
 * @dest: memory area
 * @src: memory cource
 * @n: max number for bytes
 * Retrun: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
