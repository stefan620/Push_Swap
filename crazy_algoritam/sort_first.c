/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:16:25 by silic             #+#    #+#             */
/*   Updated: 2024/11/15 13:56:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void ft_sort_3(t_sort_params *params)
{
    if (params->arra[2] != 2)
    {
        if (params->arra[0] == 2)
        {
               ft_reverse(&params->arra, *params->size_of_a);
               write (1, "rra\n", 4);
        }
        else
        {
            ft_rotate(&params->arra, *params->size_of_a);
            write (1, "ra\n", 3);
        }
    }
    if (params->arra[0] > params->arra[1])
    {
        ft_swap(&params->arra, *params->size_of_a);
        write (1, "sa\n", 3);
    }
}
// void ft_sort_five_four(t_sort_params *params)
// {
    
// }