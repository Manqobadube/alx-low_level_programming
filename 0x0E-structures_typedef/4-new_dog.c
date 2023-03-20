#include <stdlib.h>
#include "dog.h"
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
*_strlen - the lengh string
*@str: string to measusr
*Return: 0
*/
int _strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}
