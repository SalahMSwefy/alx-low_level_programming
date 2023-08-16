#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *op_add - function for add
 *@a:frist integer
 *@b:second integer
 *Return:result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - function for sub
 *@a:frist integer
 *@b:second integer
 *Return:result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - function for mul
 *@a:frist integer
 *@b:second integer
 *Return:result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - function for div
 *@a:frist integer
 *@b:second integer
 *Return:result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - function for mod
 *@a:frist integer
 *@b:second integer
 *Return:result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
