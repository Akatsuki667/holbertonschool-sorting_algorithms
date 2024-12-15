#include "sort.h"

/**
 * swap - Swap deux entiers
 * @a: Pointeur vers le premier entier
 * @b: Pointeur vers le second entier
 */
void swap(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
