#include "main.h"

/**
 * new_process - creates new process
 * @args: array of strings containing command with its flags
 *
 * Return: 1 success, 0 fail
 */
int new_process(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			fprintf(stderr, "./hsh: 1: ls: not found\n");
		}
			exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("error in new_process: forking\n");
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (-1);
}
