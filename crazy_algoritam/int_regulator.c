/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_regulator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stefan <stefan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:55:06 by codespace         #+#    #+#             */
/*   Updated: 2024/11/18 15:21:00 by stefan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_buble(int **arra, int **arr_base, int size_of_a)
{
	int	i;
	int	swapped;
	int	k;
	int	temp;

	i = -1;
	swapped = 1;
	while (++i != size_of_a)
		(*arr_base)[i] = (*arra)[i];
	while (swapped)
	{
		swapped = 0;
		k = 0;
		while (k < size_of_a - 1)
		{
			if ((*arr_base)[k] > (*arr_base)[k + 1])
			{
				temp = (*arr_base)[k];
				(*arr_base)[k] = (*arr_base)[k + 1];
				(*arr_base)[k + 1] = temp;
				swapped = 1;
			}
			k++;
		}
	}
}

int	ft_the_decider(int **arra, int **arrb, int in_b)
{
	int	i;

	i = 0;
	while (i != in_b)
	{
		if ((*arra)[0] == (*arrb)[i] - 1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_the_decider_v2(int **arra, int size_of_a, int **buble)
{
	int	i;

	i = 0;
	while (i != size_of_a)
	{
		if ((*arra)[i] == (*buble)[0])
			break ;
		i++;
	}
	if (i > size_of_a / 2)
		return (1);
	return (0);
}

int	ft_the_decider_v3(int **arra, int size_of_a, int **buble)
{
	int	i;

	i = 0;
	while (i != size_of_a)
	{
		if ((*arra)[i] == (*buble)[size_of_a - 1])
			break ;
		i++;
	}
	if (i < size_of_a / 2)
		return (1);
	return (0);
}
int ft_order_check(int **stack, int size)
{
    int i;

    i = 0;
    while(i != size - 1)
    {
        if ((*stack)[i] > (*stack)[i + 1])
            return (1);
        i++;
    }
    return(0);
}
