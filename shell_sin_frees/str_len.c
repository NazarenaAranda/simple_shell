#include "main.h"
int str_len(char *str)
{
	int length;

	for (length = 0; str[length]; length++)
		;
	return (length);
}
