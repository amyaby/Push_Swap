/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 23:31:10 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/06 23:32:29 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void print_stack(t_stack *s)
{
    t_stack *temp;
    temp = s;
    while(temp)
    {         
        printf("%d   ",temp->value);
        temp = temp->next;       
    }
}
void free_stack(t_stack *s)
{
    while (s)
        {
            t_stack *temp = s;
            s = s->next;
            free(temp);
        }
}