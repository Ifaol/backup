#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2, num3;
/* print all the combination of single numbers */
for (num1 = 0 ; num1 <= 9 ; num1++)
{
for (num2 = 0 ; num2 <= 9 ; num2++)
{
num3 = num1 * 10 + num2;
if (num1 < num2)
{
putchar('0' + num1);
putchar('0' + num2);
if (num3 != 89)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}