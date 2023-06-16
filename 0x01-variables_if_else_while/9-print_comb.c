#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all possible combinantions of single-digit number'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
