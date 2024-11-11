/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:25:04 by silic             #+#    #+#             */
/*   Updated: 2024/11/11 20:10:08 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void ft_split_a(int **arra, int **arrb,int **arr_base,int *size_of_a, int *size_of_b, int **arr_chunks_b, int pivot)
{
    int c = 0;
    static int i = 0;
    // printf("pivot sa = %d\n", (*arr_base)[pivot]);
    // printf("pivot sa = %d\n", pivot);
    while (c != pivot)
    {
        if((*arra)[0] >= (*arr_base)[pivot])
        {
            ft_rotate(arra, *size_of_a);
            printf("ra\n");
            //c++;
        }
        else if ((*arra)[0] <= (*arr_base)[pivot])
        {
            ft_push(arrb, arra, size_of_b, size_of_a);
            printf("pb\n");
            c++;
        }
    }
    (*arr_chunks_b)[i] = c;
    i++;
}
void ft_finish_a(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b)
{
    int i = 0;
    while(*size_of_a != 1)
    {
        ft_buble(arra, arr_base, *size_of_a);
        if ((*arra)[0] != (*arr_base)[0])
        {
            ft_rotate(arra, *size_of_a);
            printf("ra\n");
        }
        else
        {
            ft_push(arrb, arra, size_of_b, size_of_a);
            printf("pb\n");
            i++;
        }
    }
    while (i != 0)
    {
       ft_push(arra, arrb, size_of_a, size_of_b);
        printf("pa\n");
            i--;
    }
}
void ft_final_sort(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b, int delimiter)
{
    int i = 0;
    int c = 0;
    while(1)
    {
        ft_buble(arrb, arr_base, *size_of_b);
        if ((*arrb)[0] == (*arra)[0] - 1)
        {
            ft_push(arra, arrb, size_of_a, size_of_b);
            printf("pa\n");
            break;
        }
        else
        {
            ft_rotate(arrb, *size_of_b);
            printf("rb\n");
            i++;
        }
    }
    while (i != 0)
    {
        ft_reverse(arrb, *size_of_b);
        printf("rrb\n");
        if ((*arrb)[0] == (*arra)[0] - 1)
        {
            ft_push(arra, arrb, size_of_a, size_of_b);
            printf("pa\n");
        }
        i--;
    }
}
void ft_finish_b(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b)
{
    while(*size_of_b != 0)
    {
        ft_buble(arrb, arr_base, *size_of_b);
        if ((*arrb)[0] != (*arr_base)[*size_of_b - 1])
        {
            ft_rotate(arrb, *size_of_b);
            printf("rb\n");
        }
        else
        {
            ft_push(arra, arrb, size_of_a, size_of_b);
            printf("pa\n");
        }
    }
    // while (i != 0)
    // {
    //    ft_push(arrb, arra, size_of_b, size_of_a);
    //     printf("pb\n");
    //         i--;
    // }
}


