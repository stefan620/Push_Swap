/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:45:51 by silic             #+#    #+#             */
/*   Updated: 2024/11/03 16:31:39 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int size_of_a;
    int size_of_b;
    int *arra;
    int *arrb;
    int *arr_base;
    int i;
    i = 0;
    int c = 0;
    size_of_b = 0;
    size_of_a = argc - 1;
     int save_size = size_of_a;
    arrb = (int *)malloc(size_of_a * sizeof(int));
    arra = ft_int_regulator(argv, (int )*&size_of_a);
    arr_base = (int *)malloc(size_of_a * sizeof(int));
    ft_buble(&arra, &arr_base, size_of_a);
    ft_split(&arra, &arrb, &arr_base, &size_of_a, &size_of_b);
    while(1)
    {
        if(!ft_order_check(&arra, size_of_a))
            break;
        ft_buble(&arra, &arr_base, size_of_a);
        ft_sort_a(&arra, &arrb, &arr_base, &size_of_a, &size_of_b);
        c++;
    }
    ////////////////////////////////////////////////////
   
    int a;
    int b;
    a = 0;
    b = 0;
    //printf("number of operations = %d\n", c);
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
    /////////////////////////////////////////////    
    free(arra);
    free(arrb);
    return(0);
}