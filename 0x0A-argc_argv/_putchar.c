#include <stdio.h>
#include "main.h"

/**
*_putchar - writes the charactor
*@c: the input
*Return: on success 1
*On error, -1 is returned
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
