#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  print_alphabet - print alphabet
 */

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar (letter);
_putchar ('\n');

}
