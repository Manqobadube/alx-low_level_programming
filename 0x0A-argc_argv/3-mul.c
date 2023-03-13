#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
*main - convert a string
*@argc: string to be converted
*@argv: array elements
*Return: 0
*/
int main(int argc, char **argv)
{
int arr_len = argc - 1;

if (arr_len != 2)
{
puts("Error");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
