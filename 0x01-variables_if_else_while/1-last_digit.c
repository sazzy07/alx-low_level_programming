#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Start point
 * Return: Always return 0
 */
int main(void)
{
	int n;
	
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 100;
	if (c > 20)
		printf("Last digit of %d is %d and is greater than 20\n", n, c);
	if (c == 0)
		printf("Last digit of %d is %d and is 0\n", n, c);
	if (c < 25 && c != 0)
		printf("Last digit of %d is %d and is less than 25 and not 0\n", n,c);
	return (0);
}
