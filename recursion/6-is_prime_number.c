#include "main.h"

int isPrime(int n, int i);
/**
 * is_prime_number - test if the number is a prime number
 * @n: number to bo checked
 *
 * Return: 1 if 'n' is a prime number. 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isPrime(n, 2));
}

/**
 * isPrime - check if the number is prime
 * @n: number to be checked
 * @div: number test for know if 'n' is prime
 *
 * Return: 1 if 'n' is a prime number. 0 otherwise.
 */
int isPrime(int n, int div)
{
	if (n == div)
		return (1);
	if ((n % div) == 0)
		return (0);
	return (isPrime(n, div + 1));
}
