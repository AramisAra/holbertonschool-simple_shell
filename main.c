#include "main.h"

/**
 * main - main function of simple shell program
 *
 * Return: returns 0
 */

int main(void)
{
	if (isatty(STDIN_FILENO == 1))
	{
		shell_interactive();
	}
	else
	{
		shell_no_interactive();
	}
	return (0);
}
