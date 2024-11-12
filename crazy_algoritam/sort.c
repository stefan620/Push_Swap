/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:25:04 by silic             #+#    #+#             */
/*   Updated: 2024/11/12 17:18:27 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void ft_split_a(int **arra, int **arrb,int **arr_base,int *size_of_a, int *size_of_b, int **arr_chunks_b, int pivot)
{
    int c = 0;
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
}
void ft_finish_a(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b)
{
   int i = 0;
    while(*size_of_a != 1)
    {
        ft_buble(arra, arr_base, *size_of_a);
        if ((*arra)[0] != (*arr_base)[0] && !ft_the_decider_v2(arra, arrb, *size_of_a, arr_base))
        {
            ft_rotate(arra, *size_of_a);
            printf("ra\n");
        }
        else if((*arra)[0] != (*arr_base)[0] && ft_the_decider_v2(arra, arrb, *size_of_a, arr_base))
        {
            ft_reverse(arra, *size_of_a);
            printf("rra\n");
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
    while (c != delimiter)
    {
        while(1)
        {
            ft_buble(arrb, arr_base, *size_of_b);
            if ((*arrb)[0] == (*arra)[0] - 1)
            {
                ft_push(arra, arrb, size_of_a, size_of_b);
                printf("pa\n");
                c++;
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
            if ((*arrb)[0] == (*arra)[0] - 1 || ft_the_decider(arra, arrb, delimiter - c - i, *size_of_b))
            {
                break;
            }
            ft_reverse(arrb, *size_of_b);
            printf("rrb\n");
            i--;
        }
    }
}
void ft_finish_b(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b)
{
    while(*size_of_b != 0)
    {
        ft_buble(arrb, arr_base, *size_of_b);
        if ((*arrb)[0] != (*arr_base)[*size_of_b - 1] && ft_the_decider_v3(arrb, arra, *size_of_b, arr_base))
        {
            ft_rotate(arrb, *size_of_b);
            printf("rb\n");
        }
        else if ((*arrb)[0] != (*arr_base)[*size_of_b - 1] && !ft_the_decider_v3(arrb, arra, *size_of_b, arr_base))
        {
            ft_reverse(arrb, *size_of_b);
            printf("rrb\n");
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


