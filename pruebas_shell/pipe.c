#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int fd[2];
	pid_t padre;
	char buf[100];
	int num;

	pipe(fd);
	padre = fork();
	switch(padre)
	{
		case 0:
			close(fd[0]);
			write(fd[1], "abcdef", 5);
			close(fd[1]);
			exit(0);
			break;
		case -1:
			/*error*/
			break;
		default:
			close(fd[1]);
			num = read(fd[0], buf, sizeof(buf));
			printf("El padre lee %d bytes: %s\n", num, buf);
			close(fd[0]);
			break;
	}
	return (0);
}

