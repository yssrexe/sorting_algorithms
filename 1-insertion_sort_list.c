#include "sort.h"

/**
*len_list -	Return length of a doubly linked list
*@h:     Pointer to the Doubly Linked List
* Return:	Length of Doubly Linked List
*/
int len_list(listint_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}

/**
* swap_nodes - Swap two adjusent nodes
* @h: pointer to the head
* @n1: pointer to the first node
* @n2: pointer to the second node
*/
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
* insertion_sort_list -   sorts a Doubly Linked List
*                           using the Insertion Sort Algorithm
* @list:    A pointer to the head of doubly linked list of integers
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *res;

	if (!list || !*list || len_list(*list) < 2)
		return;

	for (i = (*list)->next; i != NULL; i = res)
	{
		res = i->next;
		j = i->prev;
		while (j != NULL && j->n > i->n)
		{
			swap_nodes(list, &j, i);
			print_list((const listint_t *)*list);
		}
	}
}
