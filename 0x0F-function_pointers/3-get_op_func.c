#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - function that selects correct op_ to perform operation.
 * @s: Operator passed as argument.
 * Return: pointer to op_ of a,b and c or null if not +,-,/,%,*.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] =
{
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op)
{
if (ops[i].op[0] == s[0] && s[1] == '\0')
return (ops[i].f);
++i;
}
return (NULL);
}
