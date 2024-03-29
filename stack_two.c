#include "monty.h"

/**
 * delete_dnodeint_at_index - Deletes a node at specified index
 *
 * @head: A pointer to the pointer which inturn points to the head of the list.
 * @index: The index at which an element to be deleted.
 *
 * Return: 1 if it succeeds, -1 if it failed
 */
int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *traverse = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (traverse == NULL)
			return (-1);
		traverse = traverse->next;
	}

	if (traverse == *head)
	{
		*head = traverse->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		traverse->prev->next = traverse->next;
		if (traverse->next != NULL)
			traverse->next->prev = traverse->prev;
	}
	free(traverse);
	return (1);
}

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: pointer to the head of the list
 */
void free_dlistint(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

	head = NULL;
}
