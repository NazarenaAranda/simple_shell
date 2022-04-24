#include "main.h"
/**
 * main - main de la simple_shell
 * Return: comman
*/
int main(int argc, char **argv, char **env)
{
	(void)argc, (void)**argv;
	char *prompt = "$ ", *input = NULL, **args = NULL;
	int i = 0, stat = 0, arg_num = 0;
	static int ex_st, counter;
	size_t len = 0;
	ssize_t lec = 0;
	
	while(1)
	{
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