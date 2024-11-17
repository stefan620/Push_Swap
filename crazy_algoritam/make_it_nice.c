/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_it_nice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:43:42 by silic             #+#    #+#             */
/*   Updated: 2024/11/17 19:38:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_check_for_num(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i != argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*ft_int_regulator(char **argv, int size)
{
	int	i;
	int	*arr;

	i = 1;
	arr = (int *)malloc(size * sizeof(int));
	while (argv[i])
	{
		arr[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return ((int *)arr);
}

int	ft_check_repeat(int **arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i != size)
	{
		j = i + 1;
		while (j != size)
		{
			if ((*arr)[i] == (*arr)[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_over_check(char **argv, int argc)
{
	int	i;

	i = 1;
	while (i != argc)
	{
		if (ft_atoi_long(argv[i]) > 2147483647 || ft_atoi(argv[i])
			< -2147483647)
			return (1);
		i++;
	}
	return (0);
}

void	ft_set_indexes(t_sort_params *params)
{
	int	i;
	int	j;
	int	k;
	int	*arr;

	i = -1;
	arr = (int *)malloc(*params->size_of_a * sizeof(int));
	while (++i < *params->size_of_a)
	{
		k = 0;
		j = -1;
		while (++j < *params->size_of_a)
		{
			if (params->arra[i] > params->arra[j])
				k++;
		}
		arr[i] = k;
	}
	i = *params->size_of_a;
	while (i--)
		params->arra[i] = arr[i];
	free(arr);
}
