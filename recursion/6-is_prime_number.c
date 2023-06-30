#include "main.h"

int check_prime(int x, int n);

/**
 * is_prime_number - Check if prime.
 * @n: Integer to be tested.
 *
 * Description: Test if n is prime.
 * Return: 1 if integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(2, n));
}
