#include <stdio.h>
/**
 * main - prints all single digit numbers from base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int nums;
for (nums = 0; nums < 10; nums++)
{
printf("%d", nums);
}
putchar('\n');
return (0);
}
