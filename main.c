#include "main.h"

#define MAX_INPUT_SIZE 1024

/**
 * main - main function of simple shell program
 * Return: returns 0 if ran succesfully
*/
int main(void)
{
	char input[MAX_INPUT_SIZE];

	while (1)
	{
		printf("(Eshell) $");

		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			printf("\n");
			break;
		}

		input[strcspn(input, "\n")] = '\0';

		execmd(input);
	}

	return (0);
}
