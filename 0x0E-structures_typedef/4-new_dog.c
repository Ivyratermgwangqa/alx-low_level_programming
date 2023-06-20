#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog.
 * @name: type pointer char name.
 * @age: type pointer float age.
 * @owner: type pointer char owner.
 * Return: Pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
int naml = 0, ownl = 0, i;
while (name[naml])
naml++;
while (owner[owl])
ownl++;
newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
return (NULL);
newdog->name = malloc(sizeof(char) * (naml + 1));
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}
for (i = 0; i < naml; i++)
newdog->name[i] = name[i];
newdog->name[i] = '\0';
newdog->owner = malloc(sizeof(char) * (ownl + 1));
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}
for (i = 0; i < ownl; i++)
newdog->owner[i] = owner[i];
newdog->owner[i] = '\0';
newdog->age = age;
return (newdog);
}
