<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/types.h>

#define TOKEN_LIMIT 1024 //los token son los argumentos que van despues del espacio

void cd(char* args[]);
void executeCommand(char* args[]);

=======
#include "main.h"
>>>>>>> 5249e5fc8c23e11f6a99ea99aa3d9af0b85caada

int main()
{
	while(1)
	{
		size_t bufsize = 0;
		char *input = NULL;
		char *args[TOKEN_LIMIT];
		int numTokens;
		ssize_t save;
		char * tokens[TOKEN_LIMIT]; //TOKEN_LIMIT esta dentro de tokens

		write(STDOUT_FILENO, "#cisfun$ ", 9); //Promp muestra la shell en la pantalla
		save = getline(&input,&bufsize,stdin);//guarda en "input" lo que recibe del usuario

		if (save == -1)
		{
			write(STDOUT_FILENO, "\n",1);
			return (-1);
		}	
		if((args[0] = strtok(input," \n")) == NULL) continue; //si pulso enter volvemos al inicio, vuelve a aparecer "$ "
		numTokens = 1;
		while((args[numTokens] = strtok(NULL, " \n")) != NULL) numTokens++;

		if(!_strcmp("exit", args[0]))break;
		if(!_strcmp("cd", args[0])) cd(args);
		executeCommand(args);
	}
	return (0);
}


void executeCommand(char* args[])
{
	pid_t pid;
        pid = fork();

	if(pid == -1)
	{
		printf("Error creating process\n");
		return;
	}
	if(pid==0)
	{
		if (strncmp(*args, "./", 2) != 0 && strncmp(*args, "/", 1) != 0)
		{
			_path(args);
		}
		if (execve(*args,args,environ)==-1)
		{
			printf("Command not found");
			kill(getpid(),SIGTERM); 
		}	//SIGTERM es laSeñal que se envía el proceso para comunicarle un apagado “amable” (cerrando conexiones, ficheros y limpiando sus propios búfer).
	}
	waitpid(pid,NULL,0);
}
