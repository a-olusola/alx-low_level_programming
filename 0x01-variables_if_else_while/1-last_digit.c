#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* The main function where the program starts begins here*/

int main()
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* The conditional statements goes here */


	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);

	}
		return (0);
}
