#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concatenates two strings.
 *@s1: The first string.
 *@s2: The second string.
 *Return: If concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated_str;
	int s1_len = 0, s2_len = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
	s1_len++;
	while (s2[s2_len] != '\0')
	s2_len++;

	concatenated_str = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (concatenated_str == NULL)
	return (NULL);

	while (*s1 != '\0')
	concatenated_str[i++] = *s1++;

	while (*s2 != '\0')
	concatenated_str[i++] = *s2++;

	concatenated_str[i] = '\0';

	return (concatenated_str);
}
