#include "main.h"

/**
 * _isupper - function checks or uppercase character
 * @c: character checks for case
 *
 * Return: 1 if uppercase and 0 if it is not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
