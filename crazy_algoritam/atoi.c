/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:31:16 by silic             #+#    #+#             */
/*   Updated: 2024/11/14 18:04:46 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int			a;
	const char	*min;

	a = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	min = str;
	if (*min == '-' || *min == '+')
		str++;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		a = a * 10 + (*str - '0');
		str++;
	}
	if (*min == '-')
		a = a * -1;
	return (a);
}
#include <stdio.h>

long	ft_atoi_long(const char *str)
{
	long		a;
	const char	*min;

	a = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	min = str;
	if (*min == '-' || *min == '+')
		str++;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		a = a * 10 + (*str - '0');
		str++;
	}
	if (*min == '-')
		a = a * -1;
	return (a);
}
