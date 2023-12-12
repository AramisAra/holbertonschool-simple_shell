#include "main.h"

char *buffer;
/**
 * inputcontroller - this control the input of the shell termial
 * @inp: this is the input of the person
 * 
*/
void inputcontroller(int in)
{
    
    

    (void) in;
        goto exit;
    fflush(stdout);
    exit:
        free(buffer);
        printf("\n");
        exit(0);
}
/**
 * main - Is the main entry point for the shell
 * Return: Always 0
 */
int main(int argc, char *argv[])
{ 
    size_t comands;
    int id = 0;
    pid_t shell_id;
    size_t len = 1024;

    shell_id = getpid();
    id = shell_id;
    printf("shell id is %i\n", id);
    if (id != 0)
    {
        buffer = malloc(sizeof(char) * len);
        if (!buffer)
            goto error;

        signal (SIGINT, inputcontroller);
        for (; len != '\0'; len++)
        {
            if (argv[0])
            {
                putchar('$');
                putchar(' ');
            }
            comands = getline(&buffer, &len, stdin);
            if (argv[1] = "exit")
                goto exit;

            fflush(stdin);
        }
    }
    free(buffer);

    error:
        free (buffer);
        printf ("Error\n");
        return (-1);
    exit:
        free(buffer);
        printf("\n");
        exit(0);
        return(1);
    


}

