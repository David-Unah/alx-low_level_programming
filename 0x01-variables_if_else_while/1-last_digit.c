#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: usiing if with c-programming
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of\n");
printf("%d\n", n);
printf("is\n");
if (n > 5)
{
printf("%d and is greater than 5\n", n);
}
else if (n == 0)
{
printf("%d is 0", n);
}
else if (n < 6 && n != 0)
{
printf("%d and is less than 6 and not 0\n", n);
}
return (0);
}
