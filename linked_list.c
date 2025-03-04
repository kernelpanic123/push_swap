/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:57:55 by abtouait          #+#    #+#             */
/*   Updated: 2025/03/04 22:58:47 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

list *new_node(int data)
{
	list	*new;

	new = malloc(sizeof(list));
	if (!new)
		ft_error();
	new->nbr = data;
	new->next = NULL;
	return (new);
}
int sizelist(list *size)
{
	int i;

	i = 0;
	while (size)
	{
		size = size->next;
		i++;
	}
	return (i);
}


int main(void)
{
	list *head = NULL;
	new_node(5);
	printf("%d", (sizelist(head)));
	return (0);
}
