#include <stdio.h>
#include <stdlib.h>
/**
*main - returns argv
*@argc: number of argument
*@argv: array
*Return: the string
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
