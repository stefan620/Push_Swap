/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:53:06 by codespace         #+#    #+#             */
/*   Updated: 2024/10/26 14:45:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

void    ft_swap(int **stack, int size);
void ft_push(int **stack_a, int **stack_b, int *size_a, int *size_b);
void    ft_rotate(int **stack, int size);
void ft_reverse(int **stack, int size);
int     *ft_int_regulator(char *str, int size);
int ft_order_check(int **stack, int size);
int ft_reverse_order_check(int **stack, int size);

#endif