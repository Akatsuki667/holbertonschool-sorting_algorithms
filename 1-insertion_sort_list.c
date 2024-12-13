#include "sort.h"
/**
 * swap_nodes - échange deux noeuds adjacents
 * @list: double pointeur tête de list
 * @left: noeud actuellment avant
 * @right: noeud actuellement après
 */
void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
if (left->prev) /* si left à un noeud(prev) */
left->prev->next = right;
/* MAJ pointeur next de ce noeud pour qu'il pointe sur right */
if (right->next) /* si right à un noeud(next) */
right->next->prev = left;
/* MAJ pointeur prev de ce noeud pour qu'il pointe sur left */
right->prev = left->prev; /* ajustement pointeur du swap */
left->next = right->next; /* ajustement pointeur du swap */
right->next = left; /* connexion pointeur du swap */
left->prev = right; /* connexion pointeur du swap */
if (!right->prev)
/* si right prev n'existe pas -> deviens premier éléments */
*list = right; /* MAJ tête de liste qui pointe sur right*/
}
/**
 * insertion_sort_list - tri liste doublement chaînée d'entiers
 * @list: double pointeur sur la tête de liste
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *insert;
if (!list || !*list || !(*list)->next)
/* vérification liste vide OU si contient un seul élément */
return;
current = (*list)->next;
/* initialisation au deuxième élément liste */
/* considérer premier élément déjà trié*/
while (current)
/* boucle parcours chaque élément pour insertion dans partie trié */
{
insert = current; /* initialisation pointeur temporaire */
/* permet exploration partie trié -> déterminer insértion noeud */
while (insert->prev && insert->n < insert->prev->n)
/* comapraison valeur actuelle avec noeud précédent */
/* si valeur actuelle < élément précédent -> comparaison */
{
swap_nodes(list, insert->prev, insert);
/* appel fonction pour échange noeud actuel avec noeud précédent */
print_list(*list);
/* après chaque échange print liste actuelle -> suivre le tri */
}
current = current->next; /* déplacement noeud suivant */
}
}
