#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;
	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
