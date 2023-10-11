#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Returns a function pointer for an operator.
 *
 * @s: The operator.
 *
 * Description:
 * This function returns a pointer to the function that corresponds to operator
 * If the operator is not recognized, it returns NULL.
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
	int i = 0;

	if (s == NULL)
		return (NULL);

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

