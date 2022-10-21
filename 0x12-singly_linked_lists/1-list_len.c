#include "lists.h"

/**
 * list_len - Print Nuber of nodes
 *
 * Return: 
 */


size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while(h != NULL)
	{
		h = h->next;
		count++;
	};

	return count;
}
