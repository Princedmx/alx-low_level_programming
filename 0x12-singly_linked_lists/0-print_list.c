#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	list_t *tmp = h;

	while(tmp != NULL)
	{
		if(tmp->next == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);

		tmp = tmp->next;

	};

	return(0);
};

