#include <stdio.h>
/**
 * main - Entry point
 * Description: without using printf or put
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(2, message, sizeof(message) - 1);
return (1);
}
