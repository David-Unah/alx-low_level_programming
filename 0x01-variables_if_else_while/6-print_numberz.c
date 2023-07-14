#include <stdio.h>
/**
 * main - Entry point
 * Description: number from 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0 ; n < 10 ; n++)
{
putchar(n + '0');
}
putchar('\n');
return (0);
}
