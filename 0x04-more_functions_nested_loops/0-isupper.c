#include "main.h"

/**
 * _isupper - function checks for uppercase
 * @c: characte/ checks for case
 *
 * Return: 1 if uppercase and 0 if it is not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);

}
