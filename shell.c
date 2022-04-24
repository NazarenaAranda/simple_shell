#include "main.h"

#define TRUE (1 == 1)
#define FALSE (!TRUE)

/**
 * main - main de la simple_shell
 * Return: comman
*/
int main(void)
{
	char *prompt = "$ ", *input = NULL, **args;
	ssize_t length = 0;
	ssize_t i;
	int num_args;
	int count;

	do {
		write(STDOUT_FILENO, prompt, strlen(prompt));

		i = getline(&input, &length, stdin);

		write(STDOUT_FILENO, input, i);
		nnl(input);
		args = _parse(input);

		for (count = 0; args[count]; count++)
			++num_args;
		if (fork() == 0)
		{
			execve(_path(args[0], environ), args, NULL);
		}
		else
		{
			wait(NULL);
		}

	} while (i != EOF);

	free(input);
	free(args);
	_free(args, length);

	return (0);
}



