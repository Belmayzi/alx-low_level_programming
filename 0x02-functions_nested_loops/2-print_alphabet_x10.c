#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times 
 */
void print_alphabet(void)
{
	char let;
	int counter=0;

	while (counter++ < 10 )
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');

	}
}
