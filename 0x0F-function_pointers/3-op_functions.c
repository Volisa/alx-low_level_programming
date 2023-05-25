#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers = returned
 * @a: First nr
 * @b: Second nr
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of 2 numbers = returned
 * @a: Fist nr
 * @b: Second nr
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Product of two numbers = returned
 * @a: First nr
 * @b: Second nr
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division of two numbers = returned
 * @a: First nr
 * @b: Second nr
 *
 * Return: a and b quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Remainder of division of 2 numbers = returned
 * @a: First nr
 * @b: Second nr
 *
 * Return: Remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
