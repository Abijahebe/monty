#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Pointer to the top of stack
 * @line_number: Line number of instruction
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \n\t\r");

	if (!arg || !is_number(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	add_node(stack, atoi(arg));
}

/**
 * pall - Prints all values on the stack.
 * @stack: Pointer to the top of stack
 * @line_number: Line number of instruction
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
