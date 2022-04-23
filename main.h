#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

int main(void);
char **_parse(char *str);
char *_strdup(char *str);
void nnl(char *str);
void _free(char **grid, int height);
#endif
