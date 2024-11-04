/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:25:04 by silic             #+#    #+#             */
/*   Updated: 2024/11/04 20:54:15 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void ft_split(int **arra, int **arrb,int **arr_base,int *size_of_a, int *size_of_b)
{
    int c = 0;
    int pivot_top;
    int pivot_bottom;
    pivot_top = *size_of_a/3;
    pivot_bottom = *size_of_a - pivot_top;
    while(*size_of_a != pivot_top)
    {
        if ((*arra)[0] >= (*arr_base)[pivot_bottom])
        {
            ft_rotate(arra, *size_of_a);
            printf("ra\n");
            c++;
        }
        else if ((*arra)[0] > (*arr_base)[pivot_top] && (*arra)[0] < (*arr_base)[pivot_bottom])
        {
            ft_push(arrb, arra, size_of_b, size_of_a);
            printf("pb\n");
            c++;
        }
        else if ((*arra)[0] <= (*arr_base)[pivot_top])
        {
            ft_push(arrb, arra, size_of_b, size_of_a);
            printf("pb\n");
            c++;
            ft_rotate(arrb, *size_of_b);
            printf("rb\n");
            c++;
        }
    //     if (c > 150)
    //         break;
     }
}