/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:56:50 by codespace         #+#    #+#             */
/*   Updated: 2024/10/26 16:06:43 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    ft_swap(int **stack, int size)
{
    int temp;
    
    if (size <= 1)
        return ;
    temp = **stack;
    **stack = (*stack)[1];
    (*stack)[1] = temp; 
}
void ft_push(int **stack_a, int **stack_b, int *size_a, int *size_b)
{
    int tmp_b;
    int i;
    
    i = 0;
    tmp_b = **stack_b; // int to be pushed;
    while (i != *size_b)
    {
        (*stack_b)[i] = (*stack_b)[i+1];
        i++;  
    }
    i = *size_a;
    while (i  !=  0)
    {
       (*stack_a)[i] = (*stack_a)[i - 1];
       i--;
    }
    *size_a = *size_a + 1;
    *size_b = *size_b - 1;
    (*stack_a)[0] = tmp_b;
    // printf("size of a = %d\n", *size_a);
    // printf("size of b = %d\n", *size_b);
}
void    ft_rotate(int **stack, int size)
{
    int tmp;
    int i;
    
    i = 0;
    tmp = **stack;
    while (i != size)
    {
        (*stack)[i] = (*stack)[i + 1];
        i++;   
    }
    (*stack)[size - 1] = tmp;
}
void ft_reverse(int **stack, int size)
{
    int tmp;

    tmp = (*stack)[size - 1];
    while (size != 0)
    {
        (*stack)[size] = (*stack)[size - 1];
        size--;    
    }
    **stack = tmp; 
}

// int main(void)
// {
//     int *arra = (int *)malloc(10 * sizeof(int));
//     int *arrb = (int *)malloc(10 * sizeof(int));
//     int i = 0;
//     int j = 1;
//     int k = 4;
//     while(i != 3)
//     {
//         arra[i] = j;
//         i++;
//         j++;
//     };
//     i = 0;
//     while(i != 4)
//     {
//         arrb[i] = k;
//         i++;
//         k++;
//     };
//     ft_reverse(&arrb, 4);
//     i = 0;
//     printf("A-------B \n \n");
//     while(i != 5)
//     {
//         printf("%d-------%d \n", arra[i], arrb[i]);
//         i++;
//     }
//     free(arra);
//     free(arrb);
//     return(0);
// }