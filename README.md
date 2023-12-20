Simple Shell

Release date: December 18, 2023

Overview

A shell, in computing, serves as a command-line interpreter facilitating user access to the operating system's services. Depending on the interface utilized, shells come in various types. In this instance, the focus is on developing a shell program of the sh type (Bourne Shell). Users typically engage with a shell via a terminal emulator, which allows inputting and displaying or printing data within a computing system.

Purpose

The primary function of a shell involves interpreting commands. It encompasses functionalities such as process control, input/output redirection, file manipulation, permissions, communication, and a command language for scripting or creating batch programs. All Unix-type systems contain at least one interpreter compatible with the Bourne shell, usually located within the Unix file structure at /bin/sh.

Tasks

    Task 0: README, man_1_simple_shell, AUTHORS
    Task 1: Implementing code according to Betty's style guide
    Task 2: Simple shell 0.1
    Task 3: Simple shell 0.2
    Task 4: Simple shell 0.3
    Task 5: Simple shell 0.4
    Task 6: Simple shell 1.0
    Task 7: Understanding the behavior of 'ls -l' command in the shell

General Requirements

    Editors allowed: vi, vim, emacs
    Compilation on Ubuntu 14.04 LTS
    C programs compiled using gcc 4.8.4 with flags -Wall -Werror -Wextra -pedantic
    Code adheres to the Betty style guide (checked using betty-style.pl and betty-doc.pl)
    No more than 5 functions per file
    Header files should be include guarded
    The shell should mirror the output and error output of /bin/sh unless specified otherwise

Allowed Functions

    execve, exit, fork, free, getline, isatty, malloc, perror, signal, stat, strtok, wait, write

Documentation

Installation steps:

    Clone this repository: git clone "https://github.com/Ouyei/simple_shell"
    Navigate to the repository: cd simple_shell
    Compile: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
    Run in interactive mode: ./hsh
    Run in non-interactive mode: example echo "Hello world!" | ./hsh

Testing

Compile the code and execute the generated executable file in your terminal as follows:

shell

$ ./hsh
$ $ ls -l
total 56
-rw-r--r-- 1 root root 238 Dec 6 08:34 AUTHORS
-rwxr-xr-x 1 root root 393 Dec 6 08:39 generate-authors.sh
... (output continues)

Please note that the output should resemble the behavior of the 'ls -l' command executed in /bin/sh.

Arthors

Aramis Martinez
