#include "main.h"
/**
* str_concat - concatenate string
* @s1: string 1
* @s2: string 2
* Return: resultado
*/

char *str_cat(char *s1, char *s2)
{
	char *result;
	int long1, long2, a = 0, b = 0;

	long1 = str_len(s1);
	long2 = str_len(s2);
	result = malloc((long1 + long2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	*result = '\0';

	while (s1[b])
		result[a++] = s1[b++];

	while (s2[b])
		result[a++] = s2[b++];
	result[a] = '\0';
	return (result);
}

