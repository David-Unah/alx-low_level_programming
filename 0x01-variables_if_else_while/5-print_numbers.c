#include <stdio.h>
/**
 * main - Entry point
 * Description: number from 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar(number + '0');
}
putchar('\n');
return (0);
}
