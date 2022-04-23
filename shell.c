#include "main.h"

#define TRUE (1 == 1)
#define FALSE (!TRUE)

/**
 * main - main de la simple_shell
 */
int main(void)
{
	char *prompt = "--> ", *input = NULL, **args;
	size_t length = 0;
	ssize_t i;

	while (TRUE)
	{
		write(STDOUT_FILENO, prompt, strlen(prompt));

		i = getline(&input, &length, stdin);

		write (STDOUT_FILENO, input, i);
		nnl(input);
		args = _parse(input);

		execve(args[0], args, NULL);
	}

	free(input);
	free (args);

	return (0);
}



