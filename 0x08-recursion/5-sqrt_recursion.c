#include "main.h"

/**
 * _sqrt_recursion - recursive function of squareroot
 * @n: number
 * Return: void
 */

int _sqrt_recursion(int n)
{
	int low = 0;
	int high = n + 1;
	if (high - low > 1)
	{
		int mid = (low + high) / 2;
		if (mid * mid <= n)
		{
			low = mid;
		}
		else
		{
			high = mid;
		}
	}
	return low;
}
