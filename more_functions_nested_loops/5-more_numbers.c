#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print the numbers from 1 to 14
 */
void more_numbers(void)
{
	int num, repit;

	for (repit = 0; repit <=  9; repit++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				putchar((num / 10) + '0');
			}
			putchar((num % 10) + '0');
		}
		putchar('\n');
	}
}
