#include "sort.h"
/**
* insertion_sort_list - insertion sorting algorithm
* @list: linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	int a;

	if (!list)
		return;
	temp = *list;
	while (temp)
	{
		while (temp)
		{
			if (temp->next)
			{
				if (temp->a > temp->next->a)
				{
					a = temp->a;
					*(int *)&temp->a = temp->next->a;
					*(int *)&temp->next->a = a;
					temp = *list;
					print_list(*list);
					break;
				}
			}
			temp = temp->next;
		}
	}
}
