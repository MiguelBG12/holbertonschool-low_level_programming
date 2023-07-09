#ifndef _variadic_function_h_
#define _variadic_function_h_
#include <stdarg.h>

/**
 * struct print -struc print
 *
 * @p: operator
 * @f: function associated
 */
typedef struct print
{
	char *p;
	void (*f)(va_list ap);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* variadic_function.h */
