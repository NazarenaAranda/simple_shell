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
    int padre2;

    for (;;)
    {
	    padre = fork();
	    padre2 = fork();
            if (padre == 0)
           {
                    printf("shell$ ");
                    texto = getline(&buffer,&bufsize,stdin);
		    char *argv[] = {"/bin/ls", "-l", "./", NULL};
                    if (execve(argv[0], argv2, NULL) == -1 )
                    {
                            perror("Error:");
                    } 
		    break;
            }
	    else if (padre2 == 0)
           {
                    texto = getline(&buffer,&bufsize,stdin);
                    char *argv[] = {"/bin/ls", "./", NULL};
                    if (execve(argv[0], argv, NULL) == -1 )
                    {
                            perror("Error:");
                    }
                    break;	
	   }
            else
            {
                    wait(NULL);
			
            }
            continue;
    }
    return (0);
}
