/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:42:29 by mlitvino          #+#    #+#             */
/*   Updated: 2024/12/10 10:59:27 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi_check(const char *str)
{
	int			res;
	int			sign;
	long int	temp;

	res = 0;
	sign = 1;
	if (str == NULL)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
	{
		temp = res;
		if (temp > INT_MAX)
			return (temp);
		res = res * 10 + (*str++ - '0');
	}
	if (*str)
		return ((long)INT_MAX + 1);
	return (res * sign);
}
