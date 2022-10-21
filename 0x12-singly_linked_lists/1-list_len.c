#include "lists.h"

/**
 * list_len - Print Nuber of nodes
 *
 * Return: 
 */


size_t list_len(const list_t *h)
{
	int count = 0;

	while(h != NULL)
	{
		h = h->next;
		count++;
	};
	
	printf("\n Total no. of nodes is %d", count);

	return count;
};
