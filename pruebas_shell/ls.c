#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
    char *buffer;
    
    size_t bufsize = 0;
    pid_t padre;
   
    for (;;)
    {
	    padre = fork();
            if (padre == 0)
           {
		    printf("shell$ ");
		   
                    getline(&buffer,&bufsize,stdin);
                    char *argv[] = {"/PATH/ls", "./", NULL};
		    
		    if (execve(argv[0],argv, NULL) == -1)
                    {
                            perror("Error:");
                    }
		    break;
		    free(buffer);
            }
            else
            {
                    wait(NULL);
            }

    }

    return (0);
}
