/*
 *File: 1-swap.c
 * Auth: Impactpato
 */

#include "main.h"

/**
 *swap_int - Entry point
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)

{
		int tmp = *a;
		*a = *b;
		*b = tmp;

}
