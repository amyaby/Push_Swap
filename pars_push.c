/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 01:50:41 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/05 22:53:46 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *pars_push(int argc, char **argv)
{
	char *all_args;
	char **one_arg;
	t_stack *stack = NULL;
	int i = 0;
	parsing(argc,argv);
	if (is_duplicate(argc, argv))
    {
        write(1, "Error\n", 6);
        exit(0);
    }
	if(is_sorted(argc,argv))
		return 0;
	all_args = ft_strjoin(argc,argv);
	one_arg = split(all_args);
	while(one_arg[i])
	{
		int num = ft_atoi(one_arg[i]);
		push_stack(&stack,num);//pass the address of the stack
		i++;
	}
	free(all_args);
	ft_free(one_arg);

	return stack;	
}

