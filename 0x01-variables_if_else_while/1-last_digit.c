#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: print "last digit of the number stored in the variable"
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	last = n % 10;
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	else if (n == 0)
		printf("last digit of %d is %d and is 0\n", n, last);
	else if (n < 6 && !== 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return 0;