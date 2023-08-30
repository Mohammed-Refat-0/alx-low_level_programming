#include "main.h"
/**
 * is_prime_number - evalute if an integer is an prime or not
 *@n : integer to evalute
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (pprime(n, n - 1));
}

/**
 * pprime - calculates if a number is prime
 * @n: integer to evaluate
 * @i: iterator
 * Return: int
 */
int pprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (pprime(n, i - 1));
}
