#include "main.h"
/**
 * search_path - search file between the path
 * @command: cmd
 * Return: cmd path
 */
bool searchpaths(char *commands, char *Fpath)
{
	char *path = getenv("PATH");
	char *tk = strtok(path, ":");
	
	while (tk != NULL)
	{
		snprintf(Fpath, 20, "%s/%s", tk, commands);
		if (access(Fpath, X_OK) == 0)
			return (true);
		tk = strtok(NULL, ":");
	}
	return (false);
}
/**
 * execute - execute command path, child process
 * @args: arguments
 * Return: exit status
 */
void exe(char *commands)
{
	char *tk;
	pid_t childid;
	int argId = 0;
	char *args[20];
	int status;
	char Fpath[20];

	args[0] = NULL;
	for (tk = strtok(commands, " "); tk != NULL; tk = strtok(NULL, " "))
	{
		args[argId] = tk;
		argId++;
	}
	args[argId];
	childid = fork();
	if (childid == -1)
	{
		perror("Error when make pid");
		free(commands);
		exit(EXIT_FAILURE);
	}
	else if (childid == 0)
	{
		if (args[0] && !strchr(args[0], *Fpath))
			args[0] = Fpath;
	}
	if (execve(args[0], args, environ) == -1)
	{
		perror("./test");
		exit(EXIT_FAILURE);
	}
}