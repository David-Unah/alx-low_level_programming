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
printf("Last digit of ");
printf("%d", n);
printf(" is ");
int lastDigit = n % 10;
if (lastDigit > 5)
{
printf("%d and is greater than 5\n", lastDigit);
}
else if (lastDigit == 0)
{
printf("%d is 0\n", lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("%d and is less than 6 and not 0\n", lastDigit);
}
return (0);
}
