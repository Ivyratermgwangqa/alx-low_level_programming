#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: is the poiter to the struct.
 * @name: type char
 * @age: type float
 * @owner: type char
 * Return: Always (0).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
