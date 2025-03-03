/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:21:35 by abtouait          #+#    #+#             */
/*   Updated: 2025/03/04 00:21:02 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"

typedef struct List_t
{
    int data;
    struct List_t *next;
}List, Cell;

//utils
int	ft_atoi(char *str);
//ft_error
void ft_error(void);
//linked_list
Cell *new_node(int data);
int	isemptylist(List *L);
List *add_at(List *L, int data, int pos);
void printlist(List *L);
List *emptylist(void);

#endif