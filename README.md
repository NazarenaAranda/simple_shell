# Simple Shell #

## Introduction

This is a group project for the end of the first term at Holberton School. In this repository we are going to find our own version of Shell, we replicate the basic functionalities of it and we intend to demonstrate the knowledge we have acquired during the learning of the course, up to this point.

## What is a Shell?

The shell is a command interpreter, it is the computer program that provides a user interface to access the operating system services. In other words, the shell acts as an intermediary between the user and the operating system. Its function is to read the command line (string of characters formed by a command that corresponds to an executable file), interpret it, carry out the command and then output the result through the outputs.

## Project information :
tasks:

0. README, man, AUTHORS
Write a README Write a man for your shell. You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository.

1. Betty would be proud
Write a beautiful code that passes the Betty checks.

2. Simple shell 0.1
Write a UNIX command line interpreter.

3. Simple shell 0.2
Handle command lines with arguments.

4. Simple shell 0.3
Handle the must not be called if the command doesn’t exist.

5. Simple shell 0.4
Implement the exit built-in, that exits the shell Usage: exit You don’t have to handle any argument to the built-in exit.

6. Simple shell 1.0
Implement the env built-in, that prints the current environment.

7. What happens when you type ls -l *.c in the shell###

## General Requirements

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS
Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
No more than 5 functions per file
All your header files should be include guarded
This shell should not have any memory leaks
Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.

## Permitted system calls

- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fork (man 2 fork)
- free (man 3 free)
- getline (man 3 getline)
- isatty (man 3 isatty)
- malloc (man 3 malloc)
- perror(man 3 perror)
- signal (man 2 signal)
- stat (__ xstat) (man 2 stat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- write (man 2 write)
