#include "main.h"

/**
 * _isalpha - ckeck for lower case
 * @c: character to check
 * Return: 0 to 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
