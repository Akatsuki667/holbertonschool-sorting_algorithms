#include "sort.h"
/**
 * selection_sort - Trie un tableau d'entiers dans l'ordre croissant
 * en utilisant l'algorithme de tri Selection
 * @array: Le tableau à trier
 * @size: La taille du tableau
 */
void selection_sort(int *array, size_t size)
{
size_t idx_temp;
/* stockage index élément contenant plus petite */
size_t temp; /* variable temporaire swap */
size_t i; /* index parcours array */
size_t j; /* parcours recherhce plus petite valeur */
for (i = 0; i < size - 1; i++) /* parcourir array */
{
idx_temp = i; /* initialisation position actuelle i */
for (j = i + 1; j < size; j++) /* parcourir partie non trié */
{
if (array[j] < array[idx_temp])
/* vérification élément j plus petit que élément actuelle */
idx_temp = j; /* MAJ noter l'emplacement */
}
if (idx_temp != i)
/* vérification plus petit élément trouvé != élément position actuelle */
{
temp = array[i]; /* position actuelle sauvegardé */
array[i] = array[idx_temp]; /* valeur plus petite position index */
array[idx_temp] = temp; /* valeur initial placé dans idx_temp */
print_array(array, size); /* swap valeur*/
}
}
}
