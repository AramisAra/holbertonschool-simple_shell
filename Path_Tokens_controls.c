#include "main.h"
/**
 * path - Function that gets the path from enviorment
 * @env: Enviorment
 * Return: a string that contains enviorments
 */
char *path(char **env)
{
	int i = 0;
	char *path,  **copy_path;

	while (env[i])
	{
		if (_strncmp(env[i], "PATH", 4) == 0)
		{
			path = _strdup(env[i]);
			copy_path = tokenization(path, "=");
			free(path);
			path = _strdup(copy_path[1]);
		}
		i++;
	}
	free_array(copy_path);
	return (path);
}
/**
 * free_array - function to free a array
 * @tokens: array to be free
 * Return: (void)
 */
void free_array(char **tokens)
{
	int i = 0;

	while (tokens[i])
	{
		free(tokens[i]);
		i++;
	}

	free(tokens);
}
/**
 * execution - function that compares our string and execute the command.
 *
 * @tokens: Our array of tokens
 * @env: Our enviorment variables
 *
 * Return: 1 if the command is executed, 0 if not.
 */
int execution(char **tokens,  char **env)
{
	int status;
	pid_t child_pid;
	char *path_tok, **cmd;
	struct stat buffer;

	if (stat(tokens[0], &buffer) != 0)
	{
		path_tok = path(env);
		cmd = tokenization(path_tok, ":");
		free(path_tok);
		tokens[0] = add_path(tokens, cmd);
		if (stat(tokens[0], &buffer) != 0)
		{
			free_array(cmd);
			free_array(tokens);
			perror("cmd not found");
			return (0);
		}
	}
	child_pid = fork();
	if (child_pid == -1)
		perror("Child process failed");
	else if (child_pid == 0)
	{
		if (execve(tokens[0], tokens, env) == -1)
			perror("./hsh");
	}
	else
		wait(&status);
	free_array(tokens);
	return (1);
}
/**
 * add_path - this functions concatenates the path with the cmd
 * @tokens: the cmd the person introduces
 * @path_tok: the path
 * Return: the path concatenated in position 0 of the array.
 */
char *add_path(char **tokens, char **path_tok)
{
	char *cmd;
	int i = 0;
	struct stat stat_buf;

	while (path_tok[i])
	{
		cmd = _strcat(path_tok[i], tokens[0]);
		if (stat(cmd, &stat_buf) == 0)
		{
			tokens[0] = cmd;
			break;
		}
		i++;
	}

	return (tokens[0]);
}
/**
 * tokenization - extract tokens from the getline command
 * @ptr: String of the command line
 * @delim: Delimiter to tokenize the string
 * Return: the array of tokens
 */
char **tokenization(char *ptr, char *delim)
{
	char *token = NULL, **tokens = NULL;
	int i = 0;

	tokens = malloc(sizeof(char *) * 10);
	token = strtok(ptr, delim);

	while (token)
	{
		tokens[i] = malloc(sizeof(char) * _strlen(token) + 1);
		_strcpy(tokens[i], token);
		i++;
		token = NULL;
		token = strtok(NULL, delim);
	}

	tokens[i] = NULL;
	free(token);
	return (tokens);
}