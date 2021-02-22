#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
*binary_to_uint - converts number of decimal
*@b: binary number
*Return: decimal
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i;
unsigned int decimal = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i]; i++)
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
for (i = 0; b[i]; i++)
{
decimal <<= 1;
decimal += b[i] - '0';
}
return (decimal);
}
