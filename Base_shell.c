#include "main.h"
/**
 * main - This is the shell commands
 * return: 0
*/
int main(void)
{
	char *buff = NULL;
	size_t len = 0;
	ssize_t read_size = 0;
	int cou = 0;

	while (1)
	{
		if (isatty(fileno(stdin)))
			printf("AraOS $ ");
		read_size = getline(&buff, &len, stdin);
		if (read_size == -1)
		{
			free(buff);
			exit(0);
		}
		buff[strcspn(buff, "\n")] = '\0';
		for (cou = 0; buff[cou] != '\0'; cou++)
		{
			if(buff[cou] != ' ')
				break;
		}
		if (strcmp(buff, "exit") == 0)
		{
			free(buff);
			exit(0);
		}
		else if (strcmp(buff, "env") == 0)
			_envp();
		else
			exe(buff);
	}
	free(buff);
	return (0);
}
			

