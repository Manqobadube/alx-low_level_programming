#include "main.h"
/**
 * _strlen - lengh of the string
 * @s: a pointer to an int
 * Return: void that means our answer
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
