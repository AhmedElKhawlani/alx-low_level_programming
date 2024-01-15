int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
* add - adds two integers
* @a: first integer
* @b: second integer
* Return: the sum
*/

int add(int a, int b)
{
	return (a + b);
}

/**
* sub - subtracts an integer from another
* @a: first integer
* @b: second integer, to be substructed
* Return: the subtract
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - multiplies two integers
* @a: first integer
* @b: second integer
* Return: the multiple
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
* div - divideds the first integer by the second
* @a: first integer
* @b: second integer
* Return: the dividend
*/

int div(int a, int b)
{
	return (a / b);
}

/**
  mod - finds the modulus of the first integer by the second
  @a: first integer
  @b: second integer
  Return: the modulus
*/

int mod(int a, int b)
{
	return (a % b);
}
