/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 19:33:30 by mtan              #+#    #+#             */
/*   Updated: 2017/04/18 19:33:31 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list		*temp;

	temp = malloc(sizeof(t_list));
	temp->data = data;
	temp->next = NULL;
	return (temp);
}

void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list		*list = NULL;

	list = ft_create_elem("1");
	list->next = ft_create_elem("2");
	list->next->next = ft_create_elem("3");
	list->next->next->next = ft_create_elem("4");
	ft_list_push_back(&list, "1");

	while (list->next != NULL)
	{
		printf("%s", list->data);
		list = list->next;
	}
	printf("%s", list->data);
	return (0);
}
