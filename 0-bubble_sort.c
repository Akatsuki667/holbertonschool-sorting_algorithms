#include "sort.h"
/**
 * bubble_sort - Trie un tableau d'entiers dans l'ordre croissant
 * en utilisant l'algorithme Bubble Sort.
 * @array: Pointeur vers le tableau d'entiers à trier.
 * @size: La taille du tableau.
 * Description : Imprime le tableau après chaque échange.
 */
void bubble_sort(int *array, size_t size)
{
size_t temp; /* stockage i pour swap */
size_t i; /* index itération */
int swapped_flag = 0; /* flag pour flag */
int global_flag = 0; /* flag pour sortir de while */
if (size == 0) /* vérification paramètre valide */
return;
while (global_flag == 0)
/* tant que tout n'est pas swap */
{
swapped_flag = 0;
/* réinitialisation pour relancer itération et while */
for (i = 0; i < size - 1; i++)
/* itération sur array */
{
if (array[i + 1] < array[i])
/* vérification nb d'après inférieur */
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
/* si non swap nb */
print_array(array, size);
swapped_flag = 1;
/* flag initialisé à 1 car swap fait*/
}
}
if (swapped_flag != 1)
/* vérification si comparaison faite */
global_flag = 1;
/* si non arrêt de while */
}
}
