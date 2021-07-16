#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *s;
if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
<<<<<<< HEAD
	;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
=======
;
}
if (s2 == NULL)
 = 0;
else
{
for (j = 0; s2[j]; j++)
;
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < j; k++)
s[k + i] = s2[k];
s[i + j] = '\0';
return (s);
>>>>>>> aac45f9abc92ab70a57f3471c29462ee89470d69
}
