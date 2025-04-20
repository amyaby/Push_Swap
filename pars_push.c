/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 01:50:41 by iabasala          #+#    #+#             */
/*   Updated: 2025/04/20 00:23:05 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *pars_push(int argc, char **argv)
{
    char *all_args;
    char **one_arg;
    t_stack *stack = NULL;
    t_stack *b = NULL;
    int i = 0;

      parsing(argc, argv);
    is_duplicate(argc, argv);

    if (is_sorted(argc, argv))
        return NULL;

    all_args = ft_strjoin(argc, argv);
    one_arg = split(all_args);
    free(all_args); 
    if (!one_arg)
    {
        write(2, "Error\n", 6);
        exit(1);
    }

    while (one_arg[i])
    {
        int num = ft_atoi(one_arg[i]);
        push_stack(&stack, num);
        i++;
    }

    if (one_arg)
        free(one_arg);
    algo(&stack, &b, sort_array(stack), ft_lstsize(stack));
        t_stack *tmp = stack;
        while(tmp != NULL)
        {
            printf("%d -> ", tmp->value);
            tmp = tmp->next;
        }
        printf("NULL\n");
    return stack;
}

