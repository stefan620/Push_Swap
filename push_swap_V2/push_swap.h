/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:53:06 by codespace         #+#    #+#             */
/*   Updated: 2024/11/05 19:51:35 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

void ft_split_a(int **arra, int **arrb,int **arr_base,int *size_of_a, int *size_of_b, int **arr_chunks_b);
void    ft_sort_a(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b);
void    ft_sort_b_top(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b);  
void    ft_swap(int **stack, int size);
void ft_push(int **stack_a, int **stack_b, int *size_a, int *size_b);
void    ft_rotate(int **stack, int size);
void ft_reverse(int **stack, int size);
int     *ft_int_regulator(char **argv, int size);
int ft_order_check(int **stack, int size);
int ft_reverse_order_check(int **stack, int size);
int ft_order_check(int **stack, int size);
void ft_buble(int **stack, int **base, int size);
void ft_check_a(int **arra);
void ft_split_b(int **arra, int **arrb,int **arr_base,int *size_of_a, int *size_of_b, int pivot);
void ft_check_b(int **arrb);

#endif