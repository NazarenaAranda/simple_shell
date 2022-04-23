#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer;
    size_t bufsize = 0;

    for (;;)
    {
    printf("$ ");
    getline(&buffer,&bufsize,stdin);
    printf("%s",buffer);
    }

    return(0);
}
