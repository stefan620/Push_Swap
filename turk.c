/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:16:50 by silic             #+#    #+#             */
/*   Updated: 2024/11/04 20:24:48 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int main (int argc, char **argv)
{
    int c = 0;
    int size_of_a;
    int size_of_b;
    int *arra;
    int *arrb;
    int check = 0;
    int i = 0;
    int save_size;
    size_of_b = 0;
    size_of_a = argc - 1;
    arrb = (int *)malloc(size_of_a * sizeof(int));
    arra = ft_int_regulator(argv, (int )*&size_of_a);
    while (i != 2)
    {
        ft_push(&arrb, &arra, &size_of_b, &size_of_a);
        i++;
        printf("pb\n");
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