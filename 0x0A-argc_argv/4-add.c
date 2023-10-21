#include "main.h"
#include <stdlib.h>
/**
 *main-a print its name function
 *@argv: input string
 *@argc: input int
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
long add = 0;
int i;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1 ; i < argc ; i++)
{
char *end_ptr;
long number = strtol(argv[i], &end_ptr, 10);
if (*end_ptr == '\0')
{
add = add + number;
}
else
{
printf("Error\n");
return (1);
break;
}
}
printf("%ld\n", add);
return (0);
}
