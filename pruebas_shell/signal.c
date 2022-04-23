#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void MySignalHandler(int sig){
	printf("Signal number is %d \n", sig);
}

int main(void)
{
	signal(SIGIO, &MySignalHandler);
	while(1)
	{
		printf("zzzZZZzzz \n");
		sleep(2);
	}
	return (0);
}
