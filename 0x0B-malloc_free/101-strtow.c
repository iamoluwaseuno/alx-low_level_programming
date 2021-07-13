#include <stdlib.h>
/**
 * strtow - char
 * @str: pointer to string params
 * Return: char
 */
char **strtow(char *str)
{
<<<<<<< HEAD
	char **ptr;
	int i, k, len, start, end, j = 0;
	int words =  countWords(str);

	if (!str || !countWords(str))
		return (NULL);
	ptr = malloc(s		start = startIndex(str, j);
		end = endIndex(str, start);
		len = end - start;
		ptr[i] = malloc(sizeof(char) * (len + 1));
		if (!ptr[i])
		{
			i -= 1;
			while (i >= 0)
			{
				free(ptr[i]);
					i--;
			}
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			ptr[i][k] = str[start++];
		ptr[i][k++] = '\0';
		j = end + 1;
	}
	ptr[i] = NULL;
	return (ptr);
=======
int i = 0, j = 0, k = 0;
int len = 0, count = 0;
char **f, *col;
if (!str || !*str)
{
return (NULL);
>>>>>>> 17c90fcd8e9b88a8cfe319aa8c959b4531bd2840
}
while (*(str + i))
{
if (*(str + i) != ' ')
{
if (*(str + i + 1) == ' ' || *(str + i + 1) == 0)
{
count += 1;
}
}
i++;
}
if (count == 0)
{
return (NULL);
}
count += 1;
f = malloc(sizeof(char *) * count);
if (!f)
{
return (NULL);
}
i = 0;
while (*str)
{
while (*str == ' ' && *str)
{
str++;
}
len = 0;
while (*(str + len) != ' ' && *(str + len))
{
len += 1;
}
len 
col = malloc(sizeof(char) * len);
if (!col)
{
for (k = j - 1; k >= 0; k--)
{
free(f[k]);
}
free(f);
return (NULL);
}
for (k = 0; k < (len - 1);  k++)
{
*(col + k) = *(str++);
}
*(col + k) = '\0';
*(f + j) = col;
if (j < (count - 1))
{
j++;
}
}
*(f + j) = NULL;
return (f);
} /*yes*/
