#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  print_alphabet_x10 - print alphabet x10
 */

void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i <= 9; i++)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
_putchar ('\n');
}
}
