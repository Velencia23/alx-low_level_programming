#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0 (Sucess)
 */
int main(void)
{
char abc;
for (abc = 'a' ; abc <= 'z'; abc++)
{
if (abc == 'q' || abc == 'e')
{
continue;
}
putchar(abc);
}
putchar('\n');
return (0);
}

