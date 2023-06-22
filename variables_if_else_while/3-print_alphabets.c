#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char letter_m;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter_m = 'A'; letter_m <= 'Z'; letter_m++)
		putchar(letter_m);
	putchar ('\n');

	return (0);
}
