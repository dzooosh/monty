#include "monty.h"

/**
 * get_pint - function that prints the top element on the stack
 *
 * @stack: pointer to head of the stack
 * @line_number: where the instruction appears
 * 
 * Return: see below
 * - Upon success, nothing
 * - Upon fail, EXIT_FAILURE
 */
void get_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
