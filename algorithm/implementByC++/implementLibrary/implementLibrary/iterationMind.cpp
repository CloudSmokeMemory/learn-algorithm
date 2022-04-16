#include "iterationMind.h"

int factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	return 1;
}

int fabonacci(int n)
{
	if (n <= 2) {
		return 1;
	}
	else {
		return fabonacci(n - 1) + fabonacci(n - 2);
	}
	return 0;
}

unsigned long ackermann(unsigned long i, unsigned long j)
{
	if (i == 1) {
		return pow(2, j);
	}
	else if(j == 1) {
		return ackermann(i - 1, 2);
	}
	else {
		return ackermann(i - 1, ackermann(i, j - 1));
	}
}

int gcd(int x, int y)
{
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

void grayCodePositionSeq(int n)
{
	if (n == 1) {
		cout << 1;
	}
	else {
		grayCodePositionSeq(n - 1);
		cout << n;
		grayCodePositionSeq(n - 1);
	}
}

