/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:52:57 by codespace         #+#    #+#             */
/*   Updated: 2024/11/02 17:37:14 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
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
    // while(argv[1][i])
    // {
    //     if(argv[i][0] == ' ')
    //         size_of_a++;
    //     i++;
    // }
    // size_of_a += 1;
    i = 0;
    arrb = (int *)malloc(size_of_a * sizeof(int));
    arra = ft_int_regulator(argv, (int )*&size_of_a);
    // if (!ft_reverse_order_check(&arra, size_of_a))
    //     printf("rev sorted");
    // else
    //     printf("rev not sorted");
   // printf("size of a = %d\n", size_of_a);
   save_size = size_of_a;
    while (ft_order_check(&arra, size_of_a) || i != save_size)
    {
        if(!ft_order_check(&arra, size_of_a) && size_of_a == save_size)
            break;
       // printf("%d\n", ft_order_check(&arra, size_of_a));
        if (!ft_reverse_order_check(&arra, size_of_a) && size_of_a > 1)
        {
            //  printf("check\n");
            ft_rotate(&arra, size_of_a);
            printf("ra\n");
            check = 0;  
            c++;
        }
        else if (arra[0] > arra[1] && size_of_a > 1)
        {
            //  printf("check\n");
            ft_swap(&arra, size_of_a);
            printf("sa\n");
            check = 0;  
            c++;
        }
        else if (arra[0] > arra[size_of_a - 1])
        {
            //  printf("check\n");
            ft_reverse(&arra, size_of_a);
            printf("rra\n");
            check = 0;  
            c++;
        }
        else if(arrb[0] != 0 && arrb[0] < arrb[1])
        {
            //  printf("check\n");
            ft_swap(&arrb, size_of_b);
            printf("sb\n");
            check = 0;  
            c++;
        }
        else if(arrb[0] != 0 &&  arrb[0] < arra[0] && check != 1)
        {
            // printf("check\n");
            ft_push(&arra, &arrb, &size_of_a, &size_of_b);
            printf("pa\n");
            c++;   
            check = 0;        
        }
        else
        {
            //  printf("check\n");
            ft_push(&arrb, &arra, &size_of_b, &size_of_a );
            printf("pb\n");
            check = 1;
            //break;
            c++;
        }
        //printf("size of a = %d\n", size_of_a);
        i = size_of_a;
       // printf("i = %d\n", i);
       if (c == 5000)
        break;
    }
    
    /////////////////////////////////////////////
    int a;
    int b;
    a = 0;
    b = 0;
    printf("number of operations = %d\n", c);
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
