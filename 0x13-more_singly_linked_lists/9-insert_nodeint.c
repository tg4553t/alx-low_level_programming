#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{ 
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 0; i <= idx; i++)
	{
		if (current != NULL)
			current = current->next;
		else 
		{
			free(new_node);
			return (NULL);
		}
	}	
	new_node->next = current;
	current = new_node;
	return (new_node);
}
