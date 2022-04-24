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
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, prompt, strlen(prompt));

		lec = getline(&input, &len, stdin);
		++counter;
		if (spec_char(input, lec, &ex_st) == 127)
			continue;

		nnl(input);

		args = _parse(input);
		for (i = 0; args[i]; i++)
			arg_num++;

		comands(input, args, env, &ex_st);
		stat = _path(args[0], args, env, &ex_st);
		_continue_main(stat, args, &ex_st, &counter);
		fflush(stdin);
	}
	free(input);
	return (0);
}