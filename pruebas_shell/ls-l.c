#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(char *s, int length)
{
    char *buffer;
    size_t bufsize = 0;
    char texto;

    int padre;
    padre = fork();

    for (;;)
    {
	    if (padre == 0)
	   {
		    printf("shell$ ");
		    texto = getline(&buffer,&bufsize,stdin);
		    char *argv[] = {"/bin/ls", "argv", NULL};
		    if (execve(NULL, argv, NULL) == -1)
		    {
			    perror("Error:");
		    }
		    break;
	    }
	    else
	    {
		    wait(NULL);
		    printf("shell$ ");
		    texto = getline(&buffer,&bufsize,stdin);
		    char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	    }
	    continue;
    }
    return (0);
}
