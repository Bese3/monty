#include "monty.h"


/**
 * pchar - prints the ASCII equivalent of the number at the top of the stack.
 * Exits with status EXIT_FAILURE if it's not possible
 * @stack: the stack generated by the monty bytecode @file
 * @ln: line number of monty f currently being processed
 * Return: void
 */
void pchar(stack_t **stack, unsigned int ln)
{
	if (!*stack || (*stack)->n < 0 || (*stack)->n > 127)
	{
		if (!*stack)
			fprintf(stderr, "L%d: can't pchar, stack empty\n", ln);
		else
			fprintf(stderr, "L%d: can't pchar, value out of range\n", ln);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*stack)->n);
}
