/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:27:25 by silic             #+#    #+#             */
/*   Updated: 2024/11/22 13:55:53 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

static void	ft_push_swap(t_sort_params *params, int i);
static int	helper(t_sort_params *params);
static int	helper_1(t_sort_params *params, int *i);
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
	i = 2;
	if (ft_check_for_num(argv, argc) || ft_over_check(argv, argc))
		return (write(1, "Error\n", 7), 0);
	if (size_of_a <= 1)
		return (write(1, "Error\n", 7), 0);
	params = (t_sort_params *)malloc(sizeof(t_sort_params));
	params->arra = ft_int_regulator(argv, (int)*&size_of_a);
	params->arrb = (int *)malloc(size_of_a * sizeof(int));
	params->arr_base = (int *)malloc(size_of_a * sizeof(int));
	params->size_of_a = &size_of_a;
	params->size_of_b = &size_of_b;
	if (!helper_1(params, &i))
		return (ft_clean(params), 0);
	delimiter = ft_delimitor(size_of_a, i);
	params->delimiter = delimiter;
	ft_push_swap(params, i - 1);
	ft_clean(params);
}

static int	helper_1(t_sort_params *params, int *i)
{
	if (ft_check_repeat(&params->arra, *params->size_of_a) == 1)
		return (write(1, "Error\n", 7), 0);
	if (!ft_order_check(&params->arra, *params->size_of_a))
		return (0);
	if (helper(params))
		return (0);
	if (*params->size_of_a >= 100)
		*i = *params->size_of_a / 25;
	return (1);
}

static int	helper(t_sort_params *params)
{
	ft_set_indexes(params);
	if (*params->size_of_a <= 3)
		return (ft_sort_3(params), 1);
	else if (*params->size_of_a <= 5)
		return (ft_sort_five_four(params), 1);
	return (0);
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
