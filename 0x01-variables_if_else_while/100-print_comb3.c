#include <stdio.h>
#include <stdli * main - mm 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
int c;
int d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
putchar('0' + d);
putchar('0' + c);
if (c + d != 17)
{
putchar(',');
putchar(' ');
}
c++;
}
d++;
}
putchar('\n');
return (0);
}
