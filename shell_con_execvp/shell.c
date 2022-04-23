#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>

#define TOKEN_LIMIT 100 //los token son los argumentos que van despues del espacio

void cd(char* args[]);
void executeCommand(char* args[]);

int main()
{
	while(1)
	{
		size_t read_bytes;
		size_t bufsize = 0;
		char *input = NULL;
		char *command;
		char *args[TOKEN_LIMIT];
		int numTokens;

		printf("$ "); //muestra la shell en la pantalla
		getline(&input,&bufsize,stdin);//guarda en "input" lo que recibe del usuario

		char * tokens[TOKEN_LIMIT]; //TOKEN_LIMIT esta dentro de tokens

		if((args[0] = strtok(input," \n\t")) == NULL) continue; //si pulso enter volvemos al inicio, vuelve a aparecer "$ "
		
		numTokens = 1;
		while((args[numTokens] = strtok(NULL, " \n\t")) != NULL) numTokens++;

		if(!strcmp("exit", args[0])) break;
		if(!strcmp("cd", args[0])) cd(args);

		executeCommand(args);
	}
	
	return (0);
}

void cd(char* args[]){
	if (chdir(args[1]) == -1) {
		printf("Directory %s not found\n", args[1]);
	}
}

void executeCommand(char* args[]){
	int pid = fork();

	if(pid==-1){
		printf("Error creating process\n");
		return;
	}

	if(pid==0){
		if (execvp(args[0],args)==-1){
			printf("Command not found");
			kill(getpid(),SIGTERM);  //SIGTERM es laSeñal que se envía el proceso para comunicarle un apagado “amable” (cerrando conexiones, ficheros y limpiando sus propios búfer).
		}
	}

	waitpid(pid,NULL,0); //suspende la ejecución del proceso de llamada hasta que un hijo especificado por el argumento pid haya cambiado de estado. Ejemplo: waitpid(-valor del pid-, &status, 0)
}
