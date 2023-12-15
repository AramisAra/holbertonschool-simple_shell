#include "main.h"
/**
 * _env - prints environment
*/
void _envp(void)
{
	while (environ != NULL)
	{
		printf("%s\n", *environ);
		environ++;
	}
}