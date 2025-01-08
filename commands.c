/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:56:50 by codespace         #+#    #+#             */
/*   Updated: 2024/12/19 14:49:24 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int **stack, int size)
{
	int	temp;

	if (size <= 1)
		return ;
	temp = **stack;
	**stack = (*stack)[1];
	(*stack)[1] = temp;
}

void	ft_push(int **stack_a, int **stack_b, int *size_a, int *size_b)
{
	int	tmp_b;
	int	i;

	i = 0;
	tmp_b = **stack_b;
	while (i != *size_b)
	{
		(*stack_b)[i] = (*stack_b)[i + 1];
		i++;
	}
	i = *size_a;
	while (i != 0)
	{
		(*stack_a)[i] = (*stack_a)[i - 1];
		i--;
	}
	*size_a = *size_a + 1;
	*size_b = *size_b - 1;
	(*stack_a)[0] = tmp_b;
}

void	ft_rotate(int **stack, int size)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = **stack;
	while (i != size)
	{
		(*stack)[i] = (*stack)[i + 1];
		i++;
	}
	(*stack)[size - 1] = tmp;
}

void	ft_reverse(int **stack, int size)
{
	int	tmp;

	tmp = (*stack)[size - 1];
	while (size != 0)
	{
		(*stack)[size] = (*stack)[size - 1];
		size--;
	}
	**stack = tmp;
}
