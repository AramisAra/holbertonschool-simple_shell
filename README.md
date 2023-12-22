# Simple Shell:$ 

## Description

This project focuses on creating a shell, whirch is a command interpreter program for unix-based operating systems.
The shell allows the user ,to communicate with the operating system interactively through the commands that the user enters.
Its function is to read the command line, interpret its meaning, carry out the command, and then output the result via the outputs.
To carry out this project, the c language was used.
,
## Files

|, Name | Description |
| ------------------------------ | -------------------------------------------- |
| AUTHORS | Contributors in this repository.|
| ,man_1_simple_shell | Manual of simple_shell. |
| shell.h | Header file program. |
| main.c | Main function, interactive and non-interactive. |
| n,ew_procees.c | Function that creates a new process. |
| own_cd.c | Change the working directory. |
| own_env.c | Function that prints environment variables. |
| ow,,,,n_exit.c | Exit shell with a given state. |
| own_help.c | Function that prints help (get information about a command) |
| read_line.c | Read a line from stdin. |
| read_stream.c | Read a line from the stream. |
| shell_interactive.c | Run shell interactive mode. |
| shell_non_interactive.c | Run shell non-interactive mode. |
| split_line.c | Split a string into tokens. |
| execute_args.c | Number of builtin functions. |

## List of functions and system calls.

* ```chdir``` (man 2 chdir)
* ```exit``` (man 3 exit)
* ```fork``` (man 2 fork)
* ```free``` (man 3 free)
* ```getline``` (man 3 getline)
* ```isatty``` (man 3 isatty)
* ```malloc``` (man 3 malloc)
* ```perror``` (man 3 perror)
* ```strtok``` (man 3 strtok)
* ```waitpid``` (man 2 waitpid)

## Requeriments

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

Compile
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Usage

Interactive mode: ```./hsh```

Non-interactive mode: ```echo "/bin/ls" | ./hsh```

### Built-ins

* [x] ```cd```
* [x] ```env```
* [x] ```help```
* [x] ```exit```
* [ ] ```setenv```
* [ ] ```unsetenv```

### Examples

* **Run shell in interactive mode:**

```
 $ ./hsh
farimain~/holbertonschool-simple_shellls -l
total 64
-rw-r--r-- 1 fari fari  131 Dec 14 22:10 AUTHORS
-rw-r--r-- 1 fari fari  496 Dec 21 16:17 execute_args.c
-rw-r--r-- 1 fari fari  231 Dec 21 15:45 main.c
-rw-r--r-- 1 fari fari  507 Dec 21 16:58 main.h
-rw-r--r-- 1 fari fari 1693 Dec 21 18:12 man_1_simple_shell
-rw-r--r-- 1 fari fari  561 Dec 21 16:24 new_process.c
-rw-r--r-- 1 fari fari  339 Dec 21 17:03 own_cd.c
-rw-r--r-- 1 fari fari  315 Dec 21 17:08 own_env.c
-rw-r--r-- 1 fari fari  239 Dec 21 17:10 own_exit.c
-rw-r--r-- 1 fari fari  535 Dec 21 18:13 own_help.c
-rw-r--r-- 1 fari fari  410 Dec 21 15:57 read_line.c
-rw-r--r-- 1 fari fari   16 Dec 15 14:57 README.md
-rw-r--r-- 1 fari fari  758 Dec 21 16:52 read_stream.c
-rw-r--r-- 1 fari fari  376 Dec 21 15:45 shell_interactive.c
-rw-r--r-- 1 fari fari  370 Dec 21 16:28 shell_no_interactive.c
-rw-r--r-- 1 fari fari  770 Dec 21 16:06 split_line.c
 $ ./hsh
farimain~/holbertonschool-simple-shellpwd
/home/fari/holbertonschool-simple_shell
```
```
 $ /hsh
 simple_prompt$ echo “Hello, World!”
 “Hello, World!”
```
* **Run shell in non-interactive mode:**

```
 $ echo "/bin/ls" | ./hsh
 execute_args.c own_cd.c    prueba     shell_interactive.c
 hsh     own_env.c   read_line.c    shell_non_interactive.c
 main.c      own_exit.c  read_stream.c  split_line.c
 new_process.c   own_help.c  shell.h
```
```
 $ echo "pwd" | ./hsh
/home/fari/holbertonschool-simple_shell
 ```
## Author
[Jose C Rivera](https://github.com/Fariviriski)
[Aramis Martinez}(https://github.com/AramisAra)
