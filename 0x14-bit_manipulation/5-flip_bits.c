#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to anoter
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int execlusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = execlusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

vi 100-get_endianness.c

#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}




