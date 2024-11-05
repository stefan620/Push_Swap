/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:25:04 by silic             #+#    #+#             */
/*   Updated: 2024/11/05 21:49:51 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void ft_split_a(int **arra, int **arrb,int **arr_base,int *size_of_a, int *size_of_b, int **arr_chunks_b)
{
    int c = 0;
    static int i = 0;
    int pivot;
    pivot = *size_of_a/2;
    printf("pivot sa = %d\n", (*arr_base)[pivot]);
    printf("pivot sa = %d\n", pivot);
    while (*size_of_a != pivot + 1)
    {
        if((*arra)[0] >= (*arr_base)[pivot])
        {
            ft_rotate(arra, *size_of_a);
            printf("ra\n");
        }
        else
        {
            ft_push(arrb, arra, size_of_b, size_of_a);
            printf("pb\n");
            c++;
        }
    }
    (*arr_chunks_b)[i] = c;
    i++;
}
void ft_split_b(int **arra, int **arrb,int **arr_base, int *size_of_a, int *size_of_b, int pivot)
{
    printf("pivot = %d\n", (*arr_base)[pivot]);
    printf("pivot_number = %d\n", pivot);
    printf("arrb[0] = %d\n", (*arrb)[0]);

        
        if((*arrb)[0] <= (*arr_base)[pivot])
        {
            ft_rotate(arrb, *size_of_b);
            printf("rb\n");
        }
        else
        {
            ft_push(arra, arrb, size_of_a, size_of_b);
            printf("pa\n");
            ft_check_a(arra);
        }
        
}
void ft_check_a(int **arra)
{
    if ((*arra)[0] > (*arra)[1])
    {
        ft_swap(arra, 2);
        printf("sa\n");
    }
}
void ft_check_b(int **arrb)
{
    if ((*arrb)[0] < (*arrb)[1])
    {
        ft_swap(arrb, 2);
        printf("sb\n");
    }
}

