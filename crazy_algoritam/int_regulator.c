/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_regulator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:55:06 by codespace         #+#    #+#             */
/*   Updated: 2024/11/12 17:17:49 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_int_regulator(char **argv, int size)
{
    int i;
    int j;
    int *arr;

    i = 1;
    // j = 0;
    arr = (int *)malloc(size  * sizeof(int));
    while (argv[i])
    {
        // while (str[i] && str[i] == ' ')
        //     i++;
        //printf("i = %d\n", i);
        arr[i - 1] = atoi(argv[i]);
        // j++;
        // arr[i] = str[i] - '0';
        i++;  
        // while (str[i] && str[i] != ' ')
            // i++;
        //i++; 
    } 
    // i = 0;
    // while(i != j)
    // {
    //     printf("%d\n", arr[i]);
    //     i++;
    // }
    return(arr);
}
void ft_buble(int **arra, int **arr_base, int size_of_a)
{
    int i;
    i = 0;
    int swapped;
    int k;
    swapped = 1;
    while(i != size_of_a)
    {
        (*arr_base)[i] = (*arra)[i];
        i++;
    } 
    while (swapped) {
        swapped = 0;
        k = 0;
        while (k < size_of_a - 1)
        {
            if ((*arr_base)[k] > (*arr_base)[k + 1]) 
            {
                int temp = (*arr_base)[k];
                (*arr_base)[k] = (*arr_base)[k + 1];
                (*arr_base)[k + 1] = temp;
                swapped = 1;
            }
            k++;
        }
    }
}
int ft_the_decider(int **arra, int **arrb, int in_b, int size_of_b)
{
    int i = 0;
    while (i != in_b)
    {
        if ((*arra)[0] == (*arrb)[i] - 1)
            return (1);
        i++;    
    }
    return (0);
}
int ft_the_decider_v2(int **arra, int **arrb, int size_of_a, int **buble)
{
    int i = 0;
    while(i != size_of_a) 
    {
        if ((*arra)[i] == (*buble)[0])
            break;
        i++;   
    }
    if (i > size_of_a/2)
        return (1);
    return (0);
}
int ft_the_decider_v3(int **arra, int **arrb, int size_of_a, int **buble)
{
    int i = 0;
    while(i != size_of_a) 
    {
        if ((*arra)[i] == (*buble)[size_of_a - 1])
            break;
        i++;   
    }
    if (i < size_of_a/2)
        return (1);
    return (0);
}
int ft_split_check(int **arra, int **buble, int size_of_a)
{
    int i = 0;
    while (i != size_of_a)
    {
        if ((*arra)[i] == (*buble)[0])
            break;
        i++;
    }
    if (i < size_of_a/2)
        return (1);
    return (0);
}