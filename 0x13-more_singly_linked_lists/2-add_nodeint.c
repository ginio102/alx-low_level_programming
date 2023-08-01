#include"lists.h"
/**
 * add_nodeint - adds node at beginning of list
 * @head: points to node in list
 * @n: data to new node
 * Return: pointer to new node, NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
