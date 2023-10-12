#ifndef FILE_3_CALC_H
#define FILE_3_CALC_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/* Prototypes */
/**
 *op_add - add
 *@a: first number
 *@b: second number
 *Return: sum
 */
int op_add(int a, int b);

/**
 *op_sub - sub
 *@a: first number
 *@b: second number
 *Return: difference
 */
int op_sub(int a, int b);

/**
 *op_add - multiply
 *@a: first number
 *@b: second number
 *Return: product
 */
int op_mul(int a, int b);

/**
 *op_add - divide
 *@a: first number
 *@b: second number
 *Return: division
 */
int op_div(int a, int b);

/**
 *op_add - modulus
 *@a: first number
 *@b: second number
 *Return: remainder
 */
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


#endif
