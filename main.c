/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:52:57 by codespace         #+#    #+#             */
/*   Updated: 2024/10/26 16:44:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int c = 10;
    int size_of_a;
    int size_of_b;
    int *arra;
    int *arrb;
    int i = 0;
    int save_size;
    size_of_b = 0;
    size_of_a = 0;
    while(argv[1][size_of_a])
        size_of_a++;
    arrb = (int *)malloc(size_of_a * sizeof(int));
    arra = ft_int_regulator(argv[1], size_of_a);
    // if (!ft_reverse_order_check(&arra, size_of_a))
    //     printf("rev sorted");
    // else
    //     printf("rev not sorted");
   // printf("size of a = %d\n", size_of_a);
   save_size = size_of_a;
   //printf("save size = %d\n", save_size);
    while (ft_order_check(&arra, size_of_a) || i != save_size)
    {
        
       // printf("%d\n", ft_order_check(&arra, size_of_a));
        if (ft_reverse_order_check(&arra, size_of_a))
        {
            ft_reverse(&arra, size_of_a);
            printf("rra \n");
        }
        else if (arra[0] < arra[1])
        {
            ft_rotate(&arra, size_of_a);
            printf("ra \n");
        }
        else if (arra[0] > arra[1])
        {
            ft_swap(&arra, size_of_a);
            printf("sa \n ");
        }
        else if (size_of_b != 0 && arra[0] > arrb[0])
        {
            ft_push(&arra, &arrb, &size_of_a, &size_of_b);
            printf("pa \n"); 
        }
        else
        {
            ft_push(&arrb, &arra, &size_of_b, &size_of_a);
            printf("pb \n");
        }
        //printf("size of a = %d\n", size_of_a);
        i = size_of_a;
       // printf("i = %d\n", i);
        
    }
    /////////////////////////////////////////////
    int a;
    int b;
    a = 0;
    b = 0;
    while(a != size_of_a)
    {
        printf("%d ", arra[a]);
        a++;
    }
    printf("\n");
    while(b != size_of_b)
    {
        printf("%d ", arrb[b]);
        b++;
    }
    printf("\n");
    /////////////////////////////////////////////    
    free(arra);
    free(arrb);
    return(0);
}
