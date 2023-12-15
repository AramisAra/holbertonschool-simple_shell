#include "main.h"


void execmd(char *cmd)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("Error:fork");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		execlp(cmd, cmd, (char *)NULL);
		fprintf(stderr, "Command: %s not found\n", cmd);
		exit(EXIT_FAILURE);
	}
	else
		wait(NULL);
}
