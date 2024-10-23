/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_regulator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:55:06 by codespace         #+#    #+#             */
/*   Updated: 2024/10/23 18:14:25 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_int_regulator(char *str, int size)
{
    int i;
    int *arr;

    i = 0;
    arr = (int *)malloc(size  * sizeof(int));
    while (str[i])
    {
        arr[i] = str[i] - '0';
        i++;   
    }    
    return(arr);
}