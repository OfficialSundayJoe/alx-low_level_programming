#include "main.h"
/**
 *  print_alphabet_x10 - print the alphabet 10 times.
 *
 *  Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int s;
	int j;

	for (j = 1; s <= 10; s++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
