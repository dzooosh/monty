#include "monty.h"

/**
 * get_pall - function that prints all elements on the stack
 *
 * @stack: pointer to head of the stack
 * @line_number: where the instruction appears
 *
 * Return: see below
 * - Upon success, nothing
 * - Upon fail, EXIT_FAILURE
 */
void get_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}
