#include <stdio.h>
#include <stdlib.h>
/**
*main - returns number of commands
*@argc: number of command entered
*@argv: arguments entered
*Return: number of commands in prompt
*/
int main(int argc, __attribute__((unused))char *argv[])
{
int i = argc - 1;
printf("%d\n", i);
return (0);
}
