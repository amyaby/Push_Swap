/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 23:31:10 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/13 12:52:15 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void print_stack(t_stack *s)
{
    t_stack *temp;
    temp = s;
    while(temp)
    {         
        printf("%d ",temp->value);
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
int lst_size(t_stack *s)
{
    int i = 0;
    if (!s)
        return 0;
    while(s)
    {
        i++;
        s =  s->next;
    }
    return i;
}