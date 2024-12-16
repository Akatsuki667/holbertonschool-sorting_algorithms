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
/**
* partition - Partitionne le tableau en utilisant le schéma Lomuto
* @array: pointeur vers le tableau d'entiers
* @low: index de départ de la partition
* @high: index de fin de la partition
* @size: taille totale du tableau
* Return: index du pivot
*/
int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int j;
for (j = low; j <= high - 1; j++)
{
if (array[j] < pivot)
{
i++;
swap(&array[i], &array[j]);
print_array(array, size);
}
}
swap(&array[i + 1], &array[high]);
print_array(array, size);
return (i + 1);
}
/**
* quick_sort_rec - Trie de manière récursive les sous-tableaux
* @array: pointeur vers le tableau d'entiers
* @low: index de départ de la partition
* @high: index de fin de la partition
* @size: taille totale du tableau
*/
void quick_sort_rec(int *array, int low, int high, size_t size)
{
if (low < high)
{
int pivot = partition(array, low, high, size);
quick_sort_rec(array, low, pivot - 1, size);
quick_sort_rec(array, pivot + 1, high, size);
}
}
/**
* quick_sort - Trie tableau d'entiers ordre croissant à l'aide du tri rapide
* @array: pointeur vers le tableau d'entiers
* @size: nombre d'éléments dans le tableau
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_sort_rec(array, 0, size - 1, size);
}
