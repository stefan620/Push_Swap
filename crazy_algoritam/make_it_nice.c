/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_it_nice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:43:42 by silic             #+#    #+#             */
/*   Updated: 2024/11/13 17:44:11 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>


int	*ft_int_regulator(char **argv, int size)
{
	int	i;
	int	j;
	int	*arr;

	i = 1;
	// j = 0;
	arr = (int *)malloc(size * sizeof(int));
	while (argv[i])
	{
		// while (str[i] && str[i] == ' ')
		//     i++;
		// printf("i = %d\n", i);
		arr[i - 1] = atoi(argv[i]);
		// j++;
		// arr[i] = str[i] - '0';
		i++;
		// while (str[i] && str[i] != ' ')
		// i++;
		// i++;
	}
	// i = 0;
	// while(i != j)
	// {
	//     printf("%d\n", arr[i]);
	//     i++;
	// }
	return (arr);
}