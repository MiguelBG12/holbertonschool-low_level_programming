#include "main.h"

/**
 * print_last_digit - Imprime el último dígito de un número
 * @n: El número del cual se imprimirá el último dígito
 *
 * Return: El último dígito de @n
 */
int print_last_digit(int n)
{
int digit = n % 10;

if (n < 0)
digit = -digit;

_putchar (digit + '0');
return (digit);
}
