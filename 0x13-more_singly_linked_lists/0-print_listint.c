#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_listint - prints all the elements
*@h: pointer
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t nodenum;
nodenum = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nodenum++;
}
return (nodenum);
}
