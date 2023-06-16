#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the allocated space for ptr.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
if (ptr != NULL)
{
char *src = (char *)ptr;
char *dest = (char *)new_ptr;
unsigned int i;
/* Copy the contents of the original memory block to the new block */
for (i = 0; i < old_size && i < new_size; i++)
dest[i] = src[i];
free(ptr);
}
return (new_ptr);
}
