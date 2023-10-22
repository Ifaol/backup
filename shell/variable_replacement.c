#include "shell.h"
int command_check(char **args)
{
pit_t my_pid = getpid();
if (_strcmp(args[0], "echo") == 0)
{
if (_strcmp(args[1], "$$") == 0)
{
return (1);
}
else if (_strcmp(args[1], "$?") == 0)
{
return (1);
}
else if (_strcmp(args[1], "$PATH") == 0)
{
return (1);
}
}
else if (_strcmp(args[0], "/bin/echo") == 0)
{
  if (_strcmp()
