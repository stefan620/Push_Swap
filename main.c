/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:52:57 by codespace         #+#    #+#             */
/*   Updated: 2024/10/23 18:44:57 by codespace        ###   ########.fr       */
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
    size_of_b = 0;
    size_of_a = 0;
    while(argv[1][size_of_a])
        size_of_a++;
    arrb = (int *)malloc(size_of_a * sizeof(int));
    arra = ft_int_regulator(argv[1], size_of_a);
    while (c != 0)
    {
        if (arra[0] > arra[1])
            ft_swap(&arra, size_of_a);
        if  (arrb[0] > arrb[1])
            ft_swap(&arrb, size_of_b);
        c--;
            
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
        printf("%d ", arra[b]);
        b++;
    }
    /////////////////////////////////////////////    
    free(arra);
    free(arrb);
    return(0);
}
