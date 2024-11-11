/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_regulator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:55:06 by codespace         #+#    #+#             */
/*   Updated: 2024/11/03 14:32:51 by silic            ###   ########.fr       */
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
int ft_reverse_order_check(int **stack, int size)
{
    int i;

    i = 0;
    while(i != size)
    {
        if ((*stack)[i] < (*stack)[i + 1])
            return (1);
        i++;
    }
    return(0);
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
// #include <stdio.h>

// int main(void)
// {
//     int *arr;
//     arr = (int *)malloc(5 * sizeof(int));
//     int i = 0;
//     int size = 5;
//     while(i != size)
//     {
//         arr[i] = i;
//         i++;
//         //size--;
        
//     }
//     i = 0;
//     while(i != 5)
//     {
//         printf("%d\n", arr[i]);
//         i++;
//     }
//     printf("---%d\n", ft_reverse_order_check(&arr, size));
// }