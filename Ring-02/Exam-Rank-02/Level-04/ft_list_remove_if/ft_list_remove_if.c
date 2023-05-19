#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	(*cmp)(void *a, void *b)
{
	if (a == b)
		return(0);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current = *begin_list;
	
	while(begin_list->next)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			printf("%p\n",current);
		   *begin_list = current->next;
		   free(current);
		}
	}

}

int main(void)
{
	t_list *begin_list;
	t_list *second;

	begin_list->data = (void *)1;
	begin_list->next = second;
	
	second->data = (void *)2;
	second->next = NULL;

	ft_list_remove_if(&begin_list, begin_list->data, (*cmp)());

return (0);
}
