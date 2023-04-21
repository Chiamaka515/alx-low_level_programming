#include <stdio.h>
/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
Return: Always 0
*/
int main(void)
{
	int n;
	int i;

	for (n = 0; n < 9; digit n++)
	{
		i = n + 1;
		do {
			putchar('0' + n);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		} while (i < 10);

	putchar('\n');

	return (0);
}
