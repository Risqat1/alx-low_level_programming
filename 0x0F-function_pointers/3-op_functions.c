int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers.
 * @a: number one
 * @b: number two
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of two numbers.
 * @a: number one
 * @b: number two
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of two numbers.
 * @a: number one
 * @b: number two
 * Return: 0.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers.
 * @a: number one
 * @b: number two
 * Return: 0
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers.
 * @a: number one.
 * @b: number two.
 * Return: 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}


