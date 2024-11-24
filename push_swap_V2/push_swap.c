/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:27:25 by silic             #+#    #+#             */
/*   Updated: 2024/11/10 19:08:11 by silic            ###   ########.fr       */
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
    while(size_of_a != 2)
    {
        ft_buble(&arra, &arr_base, size_of_a);
        ft_split_a(&arra, &arrb, &arr_base, &size_of_a, &size_of_b, &arr_chunks_b);
        c++;
    }
    int pivot;
    printf("c = %d\n", c);
    ft_check_a(&arra);
    int x = 0;
    // c--;
    // while (c != 2)
    // {
        
    //     if (arr_chunks_b[c] == 1)
    //     {
    //         ft_push(&arra, &arrb, &size_of_a, &size_of_b);
    //         printf("pab\n");
    //     }
    //     else if (arr_chunks_b[c] == 2 && arrb[0] > arrb[1])
    //     {
    //         ft_swap(&arrb, size_of_b);
    //         printf("sbb\n");
    //     }
    //     else if (arr_chunks_b[c] == 2 && arrb[0] < arrb[1])
    //     {
    //         ft_push(&arra, &arrb, &size_of_a, &size_of_b);
    //         printf("pab\n");
    //     }
    //     else if (arr_chunks_b[c] >= 3)
    //     {
    //         pivot = arr_chunks_b[c]/2;
    //         if(arr_chunks_b[c] % 2 != 0 && arr_chunks_b[c] != 3)
    //              pivot++;
    //         ft_buble(&arrb, &arr_base, arr_chunks_b[c]);
    //         ft_split_b(&arra, &arrb, &arr_base, &size_of_a, &size_of_b, pivot);
    //         ft_check_a(&arra);
    //     }
    //     c--;
    //     // else
    //     //     break;
    //         x++;
    // }
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
