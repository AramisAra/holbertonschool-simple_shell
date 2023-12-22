#include "main.h"

/**
 * own_exit - produces normal termination of the process
 * @args: empty args
 *
 * Return: 0 for termination
 */
int own_exit(char **args)
{
	if (args[0] == NULL)
	{
		exit(EXIT_FAILURE);
		printf("%c\n", *args[0]);
	}
	else
	{
		return (EXIT_SUCCESS);
	}
}
