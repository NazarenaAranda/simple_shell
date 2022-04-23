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

		args = _parse(input);

		execve("/bin/ls", args, NULL);
	}

	free(input);
	free (args);

	return (0);
}



