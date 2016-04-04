/*
 * This example is from the wonderful book, "The Practice of Programming".
 *
 * We'll use CHEAT to test it. It has a couple of bugs.
 *
 */
int factorial(int n)
{
	int fac;
	fac = 1;
	while (n--)
		fac *= n;
	return fac;
}

