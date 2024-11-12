/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:53:06 by codespace         #+#    #+#             */
/*   Updated: 2024/11/12 15:55:31 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

void ft_split_a(int **arra, int **arrb,int **arr_base,int *size_of_a, int *size_of_b, int **arr_chunks_b, int pivot);
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
void ft_sort_three(int **arr, int size);
void ft_finish_a(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b);
void ft_final_sort(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b , int delemiter);
void ft_finish_b(int **arra, int **arrb, int **arr_base, int *size_of_a, int *size_of_b);
int ft_the_decider(int **arra, int **arrb, int in_b, int size_of_b);
int ft_the_decider_v2(int **arra, int **arrb, int size_of_a, int **buble);
int ft_the_decider_v3(int **arra, int **arrb, int size_of_a, int **buble);
int ft_split_check(int **arra, int **buble, int size_of_a);

#endif