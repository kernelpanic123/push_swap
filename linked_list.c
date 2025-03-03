/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:57:55 by abtouait          #+#    #+#             */
/*   Updated: 2025/03/04 00:37:01 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Cell *new_node(int data)
{
	Cell	*new;

	new = malloc(sizeof(Cell));
	if (!new)
		ft_error();
	new->data = data;
	new->next = NULL;
	return (new);
}
List *emptylist(void)
{
	return NULL;
}
int	isemptylist(List *L)
{
	return (L == NULL);
}
List *add_at(List *L, int data, int pos)
{
	List *prec = L;
	List *cur = L;
	int i = 0;
	
	Cell *cell = new_node(data);
	if (isemptylist(L))
	{
		return cell;
	}
	if (pos == 0)
	{
		cell->next = L;
		return (cell);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cell;
	cell->next = cur;

	return (L);
}
void printlist(List *L)
{
	while (!isemptylist(L))
	{
		printf("%d ", L->data);
		L = L->next;
	}
	printf("\n");
}

int main(void)
{
	List *list = emptylist();
	list = add_at(list, 600, 0);
	list = add_at(list, 200, 1);
	list = add_at(list, 100, 2);
	printlist(list);
	return (0);
}