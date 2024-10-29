/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_regulator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:55:06 by codespace         #+#    #+#             */
/*   Updated: 2024/10/29 21:41:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_int_regulator(char *str, int size)
{
    int i;
    int j;
    int *arr;

    i = 0;
    j = 0;
    arr = (int *)malloc(size  * sizeof(int));
    while (str[i])
    {
        while (str[i] && str[i] == ' ')
            i++;
        //printf("i = %d\n", i);
        arr[j] = atoi(str + i);
        j++;
        // arr[i] = str[i] - '0';
        // i++;  
        while (str[i] && str[i] != ' ')
            i++;
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