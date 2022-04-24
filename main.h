#ifndef MAIN_H
#define MAIN_H

#define TRUE (1 == 1)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void);
char **_parse(char *str);
char *_strdup(char *str);
void nnl(char *str);
void _free(char **grid, int height);
void pr_str(char *str);
int _putchar(char c);
int _strcmp(char *str_1, char *str_2);
int _strlen(char *str);
char *_strcat(char *s1, char *s2);
char *_path(char *first, char **env);
void print_str(char *str);
char **copy_env(char **env);
#endif
