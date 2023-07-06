#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - make a sum
 * @a: first number of the sum
 * @b: second number of the sum
 * Return: the sum
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;

	return (add);
}

/**
 * op_sub - make a subtraction
 * @a: first number of the subtraction
 * @b: second number of the subtraction
 * Return: the subtraction
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;

	return (sub);
}

/**
 * op_mul - perform a multiplication
 * @a: first number of the multiplication
 * @b: second number of the multiplication
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;

	return (mul);
}

/**
 * op_div - make a division
 * @a: first number of the division
 * @b: second number of the division
 * Return: the division
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;

	return (div);
}

/**
 * op_mod - make a module
 * @a: first number of the module
 * @b: second number of the module
 * Return: the module
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;

	return (mod);
}
