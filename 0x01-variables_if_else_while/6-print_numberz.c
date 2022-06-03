#include <stdio.h>
/**
 * main - prints all single digit numbers from base 10 starting from 0
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int nums;
for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
}
putchar('\n');
return (0);
}
