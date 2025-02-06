/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:39:02 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/06 01:02:15 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void rb(t_stack **sb)
{
    t_stack *temp;
    t_stack *last;

    if(!(*sb) || !(*sb)->next)
        return;
    temp = *sb;
    *sb = (*sb)->next;
    temp->next =NULL;
    ft_last_back(sb,temp);
    write(1,"rb\n",3);
}
void ra(t_stack **sa)
{
    t_stack *temp;
    t_stack *last;

    if(!(*sa) || !(*sa)->next)
        return;
    temp = *sa;
    *sa = (*sa)->next;
    temp->next =NULL;
    ft_last_back(sa,temp);
    write(1,"rb\n",3);
}
void rr(t_stack **sb, t_stack **sa)
{
    rb(sb);
    ra(sa);
    write(1,"rr\n",3);
}