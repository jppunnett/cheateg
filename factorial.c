/*
 * This example is from the wonderful book, "The Practice of Programming".
 *
 * We'll use CHEAT to test it. It has a couple of bugs.
 *
 */
int factorial(int n)
{
	if (n < 1) return 0;
	if (n < 2) return 1;

	int fac;
	fac = 1;
	while (n) {
		fac *= n;
		n--;
	}
	return fac;
}

