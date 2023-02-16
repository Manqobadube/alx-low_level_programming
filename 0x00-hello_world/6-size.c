#include <stdio.h>
/**
 * main - programe that print sizes
 * Return 0
 * /
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sized(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sized(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sized(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sized(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sized(f));
return (0);
}
