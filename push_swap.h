/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:21:35 by abtouait          #+#    #+#             */
/*   Updated: 2025/03/04 22:58:25 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"

typedef struct node
{
    int nbr;
    struct node *next;
}   list;

//utils
int	ft_atoi(char *str);
//ft_error
void ft_error(void);
//linked_list
list *new_node(int data);
int sizelist(list *size);

#endif