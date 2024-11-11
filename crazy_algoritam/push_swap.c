/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:27:25 by silic             #+#    #+#             */
/*   Updated: 2024/11/11 20:11:40 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

int main(int argc, char **argv)
{
    int size_of_a;
    int size_of_b;
    int *arra;
    int *arrb;
    int *arr_base;
    int *arr_chunks_b;
    int i;
    i = 0;
    int c = 0;
    size_of_b = 0;
    size_of_a = argc - 1;
    int save_size = size_of_a;
    arrb = (int *)malloc(size_of_a * sizeof(int));
    arra = ft_int_regulator(argv, (int )*&size_of_a);
    arr_base = (int *)malloc(size_of_a * sizeof(int));
    arr_chunks_b = (int *)malloc(size_of_a * sizeof(int));
    i = 8;
    int delimiter = size_of_a/i;
    if (size_of_a % i != 0)
        delimiter++;
    i--;
    while(c != i)
    {
        ft_buble(&arra, &arr_base, size_of_a);
        ft_split_a(&arra, &arrb, &arr_base, &size_of_a, &size_of_b, &arr_chunks_b, delimiter);
        c++;
    }

    i--;
    ft_buble(&arra, &arr_base, size_of_a);
    ft_finish_a(&arra, &arrb, &arr_base, &size_of_a, &size_of_b);
    while (i != 0)
    {
        while (size_of_b != delimiter* i)
        {
             ft_final_sort(&arra, &arrb, &arr_base, &size_of_a, &size_of_b, delimiter);
        }
        i--;
    }
   ft_finish_b(&arra, &arrb, &arr_base, &size_of_a, &size_of_b);
    


    ///////////////////////////////////////////////
 
    
    


    ///////////////////////////////////////////////
    int a;
    int b;
    int d;
    d = 0;
    a = 0;
    b = 0;
    printf("number of operations = %d\n", c);
    while(a != size_of_a)
    {
        printf("%d ", arra[a]);
        a++;
    }
    printf("\n\n");
    while(b != size_of_b)
    {
        printf("%d ", arrb[b]);
        b++;
    }
      printf("\n\n");
    while(d != 7)
    {
        printf("%d ", arr_chunks_b[d]);
        d++ ;
    }
    /////////////////////////////////////////////    
    free(arra);
    free(arrb);
    free(arr_base);
    free(arr_chunks_b);
    return(0);

    
}
