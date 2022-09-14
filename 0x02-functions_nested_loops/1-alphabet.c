#include "main.h"
/**
 * Description - print_alphabet
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
	print_alphabet();
	return (0);
}
