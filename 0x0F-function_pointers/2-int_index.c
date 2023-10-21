#include "function_pointers.h"
/**
 *int_index - array member printer function that uses function pointer
 *@array: pointer to an array
 *@size: size of the array
 *@cmp: pointer to a function
 *
 *Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, j;
if (size <= 0)
{
return (-1);
}
if (cmp != NULL && array != NULL)
{
for (i = 0 ; i < size ; i++)
{
j = cmp(array[i]);
if (j != 0)
{
return (i);
}
}
}
return (-1);
}
