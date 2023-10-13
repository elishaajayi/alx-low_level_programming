#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* Prototypes */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* Format required for format */
typedef struct character_format
{
	char *cpicker;
	void (*correct_function)(va_list);
} char_format;

/* Prototypes for correct_function */
void print_one_char(va_list characters);
void print_integers(va_list characters);
void print_float(va_list characters);
void print_string(va_list characters);

#endif
