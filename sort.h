#ifndef H
#define H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
int len_list(listint_t *h);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void rec_part(int *array, int l, int h, int s);
int low_part(int *array, int l, int h, int s);
void swp(int *array, int i, int j, int s);
#endif
