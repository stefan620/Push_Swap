/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:16:25 by silic             #+#    #+#             */
/*   Updated: 2025/01/10 19:25:56 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

static void	help(t_sort_params *params);

void	ft_sort_3(t_sort_params *params)
{
	while(1)
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
			break;
	}
}

void	ft_sort_five_four(t_sort_params *params)
{
	while (*params->size_of_b <= 1)
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
	if (params->arrb[0] == 0)
	{
		ft_swap(&params->arrb, *params->size_of_b);
		write(1, "sb\n", 3);
	}
	ft_sort_five_four_help(params);
	ft_push(&params->arra, &params->arrb, params->size_of_a, params->size_of_b);
	write(1, "pa\n", 3);
	ft_push(&params->arra, &params->arrb, params->size_of_a, params->size_of_b);
	write(1, "pa\n", 3);
}

void	ft_sort_five_four_help(t_sort_params *params)
{
	if (params->arra[1] != 4)
	{
		help(params);
	}
	else if (params->arra[2] != 4)
	{
		if (params->arra[0] == 4)
		{
			ft_rotate(&params->arra, *params->size_of_a);
			write(1, "ra\n", 3);
		}
		else
		{
			ft_reverse(&params->arra, *params->size_of_a);
			write(1, "rra\n", 4);
		}
	}
	if (params->arra[0] > params->arra[1])
	{
		ft_swap(&params->arra, *params->size_of_a);
		write(1, "sa\n", 3);
	}
}

static void	help(t_sort_params *params)
{
	if (params->arra[0] == 4)
	{
		ft_rotate(&params->arra, *params->size_of_a);
		write(1, "ra\n", 3);
	}
	else
	{
		ft_reverse(&params->arra, *params->size_of_a);
		write(1, "rra\n", 4);
	}
}
