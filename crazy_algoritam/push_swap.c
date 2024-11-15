/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:27:25 by silic             #+#    #+#             */
/*   Updated: 2024/11/15 13:58:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

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
	if (ft_check_for_num(argv, argc) || ft_over_check(argv, argc))
		return (write(1, "Errora\n", 7), 0);
	delimiter = ft_delimitor(size_of_a, i);
	params = (t_sort_params *)malloc(sizeof(t_sort_params));
	params->arra = ft_int_regulator(argv, (int)*&size_of_a);
	params->arrb = (int *)malloc(size_of_a * sizeof(int));
	params->arr_base = (int *)malloc(size_of_a * sizeof(int));
	params->size_of_a = &size_of_a;
	params->size_of_b = &size_of_b;
	params->delimiter = delimiter;
	if (ft_check_repeat(&params->arra, size_of_a) == 1)
		return (write(1, "Errorb\n", 7), 0);
	ft_set_indexes(params);
	if (size_of_a <= 3)
		return(ft_sort_3(params), 0);
	i = size_of_a / 25;
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
	int	d;

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
