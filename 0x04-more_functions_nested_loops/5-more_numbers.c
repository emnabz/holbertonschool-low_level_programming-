#include "holberton.h"
/**
* more_numbers - prints numbers from 0 to 14
*
* Return: nothing
*/
void more_numbers(void)
{
int i;
int j;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
