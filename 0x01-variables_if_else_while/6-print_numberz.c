#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print number of base 10 using putchar'
 * Return: always 0
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
