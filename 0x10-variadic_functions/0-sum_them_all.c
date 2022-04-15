#include "variadic_functions.h"

/**
<<<<<<< HEAD
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

=======
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: an integer to be passed as argument
 * Return: return sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 1;
	unsigned int current;
	unsigned int sum;

	va_start(num, n);
	current = va_arg(num, const unsigned int);
	sum = current;

	if (n == 0)
		return (0);
	while (i < n)
	{
		current = va_arg(num, const unsigned int);
		sum += current;
		i++;
	}
	va_end(num);
>>>>>>> 1ece0161eca533092a2b8c249cb75233960e53dd
	return (sum);
}
