#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *prev;
    unsigned int i;
    if (head == NULL || *head == NULL)
        return (-1);
    current = *head;
    prev = NULL;
    for (i = 0; i < index; i++)
    {
        if (current != NULL)
        {
        	prev = current;
       		current = current->next;
	}
    }
    if (prev == NULL)
        *head = current->next;
    else
        prev->next = current->next;
    free(current); 
    return (1);
}
