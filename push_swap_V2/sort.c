/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:25:04 by silic             #+#    #+#             */
/*   Updated: 2024/11/10 18:12:02 by silic            ###   ########.fr       */
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
    if (*size_of_a % 2 != 0 && *size_of_a != 3)
        pivot++;
    printf("pivot sa = %d\n", (*arr_base)[pivot]);
    printf("pivot sa = %d\n", pivot);
    while (c != pivot)
    {
        if((*arra)[0] >= (*arr_base)[pivot])
        {
            ft_rotate(arra, *size_of_a);
         ft_check_a(arra);
            printf("ra\n");
            //c++;
        }
        else if ((*arra)[0] <= (*arr_base)[pivot])
        {
            ft_push(arrb, arra, size_of_b, size_of_a);
            printf("pb\n");
            ft_check_a(arra);
            c++;
        }
    }
    (*arr_chunks_b)[i] = c;
    i++;
}
void ft_split_b(int **arra, int **arrb,int **arr_base, int *size_of_a, int *size_of_b, int pivot)
{
    int c = -1;
    int i = 0;
    printf("pivot sa b = %d\n", (*arr_base)[pivot]);
    printf("pivot sa b = %d\n", pivot);
    c = pivot *2;
  while (c != pivot)
  {
       if((*arrb)[0] < (*arr_base)[pivot])
       {
           ft_rotate(arrb, *size_of_b);
           ft_check_a(arra);
           printf("rbo\n");
           i++;
       }
       else if (*arrb[0] >= (*arr_base)[pivot])
       {
            ft_check_a(arra);
           ft_push(arra, arrb, size_of_a, size_of_b);
           ft_check_a(arra);
           printf("pa\n");
           ft_check_a(arra);
           c--;
       }
}
printf("pa\n");
while (i != 0)
{
    ft_reverse(arrb, *size_of_b);
    printf("rrb\n");
    i--;
}
ft_push(arra, arrb, size_of_a, size_of_b);
        
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

