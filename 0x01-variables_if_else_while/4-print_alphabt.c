#include <stdio.h>
/**
 * main - Entry point
 * Description: printing in lowercase minue q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
