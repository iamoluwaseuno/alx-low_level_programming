#include "holberton.h"
/**
 * factorial - factorial of a number
 * @n: number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
