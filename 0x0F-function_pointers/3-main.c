#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  return result of desired calculation from command line options.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int op1, op2, result;
char operator;
if (argc != 4)
{
printf("Error\n");
return (98);
}
op1 = atoi(argv[1]);
operator = argv[2][0];
op2 = atoi(argv[3]);
if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%')
{
if (operator == '/' && op2 == 0)
{
printf("Error\n");
return (100);
}
if (operator == '%' && op2 == 0)
{
printf("Error\n");
return (100);
}
switch (operator)
{
case '+':
result = op1 + op2;
break;
case '-':
result = op1 - op2;
break;
case '*':
result = op1 *op2;
break;
case '/':
if (op2 == 0)
{
printf("Error\n");
return (100);		}
result = op1 / op2;
break;
case '%':
if (op2 == 0)
{
printf("Error\n");
return (100);
}
result = op1 % op2;
break;
default:
printf("Error\n");
return (99);
}
printf("%d\n", result);
return (0);
printf("Error\n");
return (99);
}
}
