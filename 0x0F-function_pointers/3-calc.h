#ifndef CALC_H
#define CALC_H
/**
 * struct op - Operator and associated function pair
 *
 * @op: Operator symbol
 * @f: Pointer to a function that takes two integers (a and b) and returns int
 *
 * Description:
 * This structure pairs an operator symbol with a corresponding function.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}  op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif

