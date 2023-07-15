#include <stdio.h>
/**
 * main - Entry point
 * Description: combo5
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int i = 0; i <= 99; i++)
{
for (int j = i; j <= 99; j++)
{
int tens1 = i / 10;
int ones1 = i % 10;
int tens2 = j / 10;
int ones2 = j % 10;
putchar(tens1 + '0');
putchar(ones1 + '0');
putchar(' ');
putchar(tens2 + '0');
putchar(ones2 + '0');
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
