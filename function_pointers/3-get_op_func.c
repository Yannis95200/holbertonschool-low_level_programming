#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - Selects the correct function to perform the operation
 *               requested by the user.
 * @s: The operator passed as argument.
 * Description: This function takes an operator
 * as a string and returns a pointer
 *	to the corresponding function that performs the operation.It
 *	searches through an array of
 *	structures containing operators andtheir corresponding functions.
 *
 * Return: A pointer to the function that corresponds to the operator given as
 *		a parameter. If no match is found, it returns NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL && ops[i].op[0] != s[0])
	{

		i++;
	}


	return (ops[i].f);

}
