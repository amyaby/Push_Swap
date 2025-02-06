/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:11:12 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/06 00:19:33 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void pb(t_stack **sa, t_stack **sb)
{
    t_stack *temp;

    if (!(*sa))
        return;

    temp = *sa;
    *sa = (*sa)->next;
    temp->next = NULL;

    ft_lstadd_front(sb, temp);
    write(1, "pb\n", 3);
}
void pa(t_stack **sa, t_stack **sb)
{
    t_stack *temp;

    if (!(*sa))
        return;

    temp = *sb;
    *sb = (*sb)->next;
    temp->next = NULL;

    ft_lstadd_front(sa, temp);
    write(1, "pa\n", 3);
}

