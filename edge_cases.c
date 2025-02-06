/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edge_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:54:08 by iabasala          #+#    #+#             */
/*   Updated: 2025/02/06 14:57:52 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int is_check(char *str)
{
	int i = 0;

	if (!str[i])
		return 0;

	while (str[i] == ' ')
		i++;

	if (str[i] == '+' || str[i] == '-')
	{
			i++;

		if (str[i] < '0' || str[i] > '9')
			return 0;
	}

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}

	return 1;
}

int parsing(int argc, char **argv)
{
	int i = 1;

	if (argc < 2)
		return 0;
	while (i < argc)
	{
		if (!is_check(argv[i]))
		{
			write(2, "Error\n", 6);
			return 0;
		}
		i++;
	}
	return 1;
}



