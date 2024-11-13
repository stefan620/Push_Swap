/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:53:06 by codespace         #+#    #+#             */
/*   Updated: 2024/11/13 18:39:46 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_sort_params
{
	int	*arra;
	int	*arrb;
	int	*arr_base;
	int	*size_of_a;
	int	*size_of_b;
	int	delimiter;
}		t_sort_params;

void	ft_split_a(t_sort_params *params);
void	ft_sort_a(t_sort_params *params);
void	ft_swap(int **stack, int size);
void	ft_push(int **stack_a, int **stack_b, int *size_a, int *size_b);
void	ft_rotate(int **stack, int size);
void	ft_reverse(int **stack, int size);
int		*ft_int_regulator(char **argv, int size);
void	ft_buble(int **stack, int **base, int size);
void	ft_finish_a(t_sort_params *params);
void	ft_final_sort(t_sort_params *params);
void	ft_finish_b(t_sort_params *params);
int		ft_the_decider(int **arra, int **arrb, int in_b, int size_of_b);
int		ft_the_decider_v2(int **arra, int **arrb, int size_of_a, int **buble);
int		ft_the_decider_v3(int **arra, int **arrb, int size_of_a, int **buble);


#endif