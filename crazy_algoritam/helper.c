/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:36:15 by stefan            #+#    #+#             */
/*   Updated: 2024/11/22 14:48:48 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_clean(t_sort_params *params)
{
	free(params->arra);
	free(params->arrb);
	free(params->arr_base);
	free(params);
}
void	ft_finish_a_helper(t_sort_params *params, int *i)
{
	if (params->arra[0] != params->arr_base[0]
		&& ft_the_decider_v2(&params->arra, *params->size_of_a,
			&params->arr_base))
	{
		ft_reverse(&params->arra, *params->size_of_a);
		write(1, "rra\n", 4);
	}
	else
	{
		ft_push(&params->arrb, &params->arra, params->size_of_b,
			params->size_of_a);
		write(1, "pb\n", 3);
		(*i)++;
	}
}
void	ft_final_helper(t_sort_params *params, int *i)
{
	while (*i != 0)
	{
		if (params->arrb[0] == (params->arra)[0] - 1)
			break ;
		ft_reverse(&params->arrb, *params->size_of_b);
		write(1, "rrb\n", 4);
		(*i)--;
	}
}
void	ft_final_helper_2(t_sort_params *params, int *c)
{
	ft_push(&params->arra, &params->arrb, params->size_of_a, params->size_of_b);
	write(1, "pa\n", 3);
	(*c)++;
}
