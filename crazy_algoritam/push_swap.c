/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:27:25 by silic             #+#    #+#             */
/*   Updated: 2024/11/13 18:45:40 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static void	ft_push_swap(t_sort_params *params, int i);
static int	ft_delimitor(int size_of_a, int i);

int	main(int argc, char **argv)
{
	t_sort_params	*params;
	int				size_of_b;
	int				size_of_a;
	int				i;
	int				delimiter;

	size_of_b = 0;
	size_of_a = argc - 1;
	i = size_of_a / 25;
	delimiter = ft_delimitor(size_of_a, i);
	params = (t_sort_params *)malloc(sizeof(t_sort_params));
	params->arra = ft_int_regulator(argv, (int)*&size_of_a);
	params->arrb = (int *)malloc(size_of_a * sizeof(int));
	params->arr_base = (int *)malloc(size_of_a * sizeof(int));
	params->size_of_a = &size_of_a;
	params->size_of_b = &size_of_b;
	params->delimiter = delimiter;
	ft_push_swap(params, i - 1);
}

static int	ft_delimitor(int size_of_a, int i)
{
	int	delimiter;

	delimiter = size_of_a / i;
	if (size_of_a % i != 0)
		delimiter++;
	return (delimiter);
}

static void	ft_push_swap(t_sort_params *params, int i)
{
	int	c;
	int d;

	d = 0;
	c = 0;
	while (c != i)
	{
		ft_buble(&params->arra, &params->arr_base, *params->size_of_a);
		ft_split_a(params);
		c++;
	}
	i--;
	ft_finish_a(params);
	while (i != 0)
	{
		while (*params->size_of_b != params->delimiter * i)
		{
			ft_final_sort(params);
		}
		i--;
	}
	ft_finish_b(params);
}
