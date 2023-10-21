#include "shell.h"
/**
 *my_env - a function that prints all invironment variables
 *@args: input array
 *
 *Return: -1 if sucessful
 *
 */
int my_env(char **args)
{
int count = 0;
while (environ[count] != NULL)
{
_puts(environ[count]);
_putchar('\n');
count++;
}
token_free(args);
return (0);
}
/**
 *my_exit - a function that exites the shell
 *@args: a double pointer input of command and argumentes
 *
 *Return: void
 */
int my_exit(char **args, int count, char **argv)
{
int stat = get_status(), stat_non = get_status_non();
int final_stat;
char *arg_one;
if (arg_one == NULL)
{
if (stat == stat_non)
final_stat = stat;
else if (stat == 0 && stat_non != 0)
final_stat = stat_non;
else
final_stat = stat;
}
else
{
arg_one = args[1];
for (i = 0 ; arg_one[i] != NULL ; i++)
{
if (!(arg_one[i] >= '0' && arg_one[i] <= '9'))
{
print_error2(args, count, argv);
token_free(args);
return (2);
}
}
final_stat = _atoi(arg_one);
}
final_stat = convert_2range(final_stat);
token_free(args);
exit(final_stat);
}
/**
 *convert_2range - a function that convert exit status to range
 *@num: int input to be converted in to range
 *
 *Return: converted int number
 */
int convert_2range(int num)
{
while (num >= 256)
{
num = ((num)-(256));
}
return (num);
}
