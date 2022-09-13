#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
