#include <stdio.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
int i, j;
for (j = 0; j <= 89; j++)
{
for (i = j; i <= 89; i++)
{
if (i != j)
{
putchar(j / 10 + 48);
putchar(j % 10 + 48);
putchar(' ');
putchar(i / 10 + 48);
putchar(i % 10 + 48);
}
if (j * 100 + i != 9899)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
