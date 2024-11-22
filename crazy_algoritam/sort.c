/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:25:04 by silic             #+#    #+#             */
/*   Updated: 2024/11/22 14:48:36 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	ft_split_a(t_sort_params *params)
{
	int	c;

	c = 0;
	while (c != params->delimiter)
	{
		if (params->arra[0] >= params->arr_base[params->delimiter])
		{
			ft_rotate(&params->arra, *params->size_of_a);
			write(1, "ra\n", 3);
		}
		else if (&params->arra[0] <= &params->arr_base[params->delimiter])
		{
			ft_push(&params->arrb, &params->arra, params->size_of_b,
				params->size_of_a);
			write(1, "pb\n", 3);
			c++;
		}
	}
}

void	ft_finish_a(t_sort_params *params)
{
	int	i;

	i = 0;
	while (*params->size_of_a != 1)
	{
		ft_buble(&params->arra, &params->arr_base, *params->size_of_a);
		if (params->arra[0] != params->arr_base[0]
			&& !ft_the_decider_v2(&params->arra, *params->size_of_a,
				&params->arr_base))
		{
			ft_rotate(&params->arra, *params->size_of_a);
			write(1, "ra\n", 3);
		}
		ft_finish_a_helper(params, &i);
	}
	while (i != 0)
	{
		ft_push(&params->arra, &params->arrb, params->size_of_a,
			params->size_of_b);
		write(1, "pa\n", 3);
		i--;
	}
}

void	ft_final_sort(t_sort_params *params)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (c != params->delimiter)
	{
		while (1)
		{
			ft_buble(&params->arrb, &params->arr_base, *params->size_of_b);
			if (params->arrb[0] == (params->arra)[0] - 1)
			{
				ft_final_helper_2(params, &c);
				if (!ft_the_decider(&params->arra, &params->arrb, i))
					break ;
			}
			else
			{
				ft_rotate(&params->arrb, *params->size_of_b);
				write(1, "rb\n", 3);
				i++;
			}
		}
		ft_final_helper(params, &i);
	}
}

void	ft_finish_b(t_sort_params *params)
{
	while (*params->size_of_b != 0)
	{
		ft_buble(&params->arrb, &params->arr_base, *params->size_of_b);
		if (params->arrb[0] != (params->arr_base)[*params->size_of_b - 1]
			&& ft_the_decider_v3(&params->arrb, *params->size_of_b,
				&params->arr_base))
		{
			ft_rotate(&params->arrb, *params->size_of_b);
			write(1, "rb\n", 3);
		}
		else if (params->arrb[0] != params->arr_base[*params->size_of_b - 1]
			&& !ft_the_decider_v3(&params->arrb, *params->size_of_b,
				&params->arr_base))
		{
			ft_reverse(&params->arrb, *params->size_of_b);
			write(1, "rrb\n", 4);
		}
		else
		{
			ft_push(&params->arra, &params->arrb, params->size_of_a,
				params->size_of_b);
			write(1, "pa\n", 3);
		}
	}
}
