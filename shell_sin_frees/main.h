#ifndef SHELL
#define SHELL
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <stddef.h>
#include <sys/types.h>

#define TOKEN_LIMIT 100
char *str_cat(char *s1, char *s2);
int main();
void cd(char* args[]);
char *_getenv(char *name);
void executeCommand(char* args[]);
int _strcmp(char *s1, char *s2);
int str_len(char *str);
extern char **environ;
int _path(char **comm);
#endif
