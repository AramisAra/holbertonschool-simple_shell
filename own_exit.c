#include "main.h"

/**
 * own_exit - produces normal termination of the process
 * @args: empty args
 *
 * Return: 0 for termination
 */
int own_exit(char **args)
{
	if (args[1])
	{
		exit(atoi(args[1]));
	}
	else
	{
		return (0);
	}
}
