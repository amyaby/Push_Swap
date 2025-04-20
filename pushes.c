/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:11:12 by iabasala          #+#    #+#             */
/*   Updated: 2025/04/20 02:20:47 by iabasala         ###   ########.fr       */
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
	t_stack	*ptr_b;
	t_stack	*new_a;

	if (!(*sb))
		return ;
	ptr_b = *sb;
	new_a = ft_lstnew(ptr_b->value);
	ft_lstadd_front(sa, new_a);
	*sb = ptr_b->next;
	write(1, "pa\n", 3);
	free(ptr_b);
}

