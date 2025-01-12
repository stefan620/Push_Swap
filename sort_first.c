/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:16:25 by silic             #+#    #+#             */
/*   Updated: 2025/01/12 16:21:51 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

static void	sort_2(t_sort_params *params);

void	ft_sort_3(t_sort_params *params)
{
	if (*params->size_of_a == 3)
	{
		while (1)
		{
			if (params->arra[0] > params->arra[1])
			{
				ft_swap(&params->arra, *params->size_of_a);
				write(1, "sa\n", 3);
			}
			else if (params->arra[0] > params->arra[2])
			{
				ft_reverse(&params->arra, *params->size_of_a);
				write(1, "rra\n", 4);
			}
			else if (params->arra[1] > params->arra[2])
			{
				ft_rotate(&params->arra, *params->size_of_a);
				write(1, "ra\n", 3);
			}
			else
				break ;
		}
	}
	else
		sort_2(params);
}

void	ft_sort_five_four(t_sort_params *params)
{
	while (*params->size_of_a != 3)
	{
		if (params->arra[0] == 0 || params->arra[0] == 1)
		{
			ft_push(&params->arrb, &params->arra, params->size_of_b,
				params->size_of_a);
			write(1, "pb\n", 3);
		}
		else
		{
			ft_rotate(&params->arra, *params->size_of_a);
			write(1, "ra\n", 3);
		}
	}
	ft_sort_3(params);
	if (params->arrb[0] < params->arrb[1])
	{
		ft_swap(&params->arrb, *params->size_of_b);
		write(1, "sb\n", 3);
	}
	ft_push(&params->arra, &params->arrb, params->size_of_a, params->size_of_b);
	write(1, "pa\n", 3);
	ft_push(&params->arra, &params->arrb, params->size_of_a, params->size_of_b);
	write(1, "pa\n", 3);
}

static void	sort_2(t_sort_params *params)
{
	if (params->arra[0] > params->arra[1])
	{
		ft_swap(&params->arra, *params->size_of_a);
		write(1, "sa\n", 3);
	}
}

void	sort_4(t_sort_params *params)
{
	while (*params->size_of_a != 3)
	{
		if (params->arra[0] == 0)
		{
			ft_push(&params->arrb, &params->arra, params->size_of_b,
				params->size_of_a);
			write(1, "pb\n", 3);
		}
		else
		{
			ft_rotate(&params->arra, *params->size_of_a);
			write(1, "ra\n", 3);
		}
	}
	ft_sort_3(params);
	ft_push(&params->arra, &params->arrb, params->size_of_a, params->size_of_b);
	write(1, "pa\n", 3);
}
