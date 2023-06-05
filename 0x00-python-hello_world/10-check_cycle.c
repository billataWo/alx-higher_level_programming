#include "lists.h"

/**
 * check_cycle - It checks if there is contains a cycle in a linked list
 * @list: a linked list that to be to check
 *
 * Return: returns 1 if the list may have a cycle, otherways 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
