/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 01:50:41 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/06 23:29:24 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *pars_push(int argc, char **argv)
{
	char *all_args;
	char **one_arg;
	t_stack *stack = NULL;
	int i = 0;
	if (!parsing(argc,argv))
		exit(0);
	if (is_duplicate(argc, argv))
    {
        write(2, "Error\n", 6);
        exit(0);
    }
	if(is_sorted(argc,argv))
		return 0;
	all_args = ft_strjoin(argc,argv);
	one_arg = split(all_args);
		//printf("%s---",one_arg[1]);

	while(one_arg[i])
	{
		//printf("%s---",one_arg[i]);
		int num = ft_atoi(one_arg[i]);
		push_stack(&stack,num);//pass the address of the stack
		 printf("Before sorting: ");
    		print_stack(stack);
			if_tree(&stack);
			 printf("After sorting: ");
    print_stack(stack);
		i++;
	}
	free(all_args);
	ft_free(one_arg);

	return stack;	
}

