#ifndef MAIN_H
#define MAIN_H

/* Dependencies */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>

/* Global var */
extern char **environ;

/* This header hold all the prototype */
void _envp(void);
bool searchpaths(char *commands, char *Fpath);
void exe(char *commands);



#endif