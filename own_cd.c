#include "main.h"

/**
 * own_cd - changes working directory
 * @args: target directory
 *
 * Return: 1 success, 0 fail
 */
int own_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "expected argument to \"cd\"n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("error in own_cd.c: changing dir\n");
		}
	}
	return (-1);
}
