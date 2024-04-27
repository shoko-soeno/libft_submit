/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:25:49 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/27 03:56:37 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	handle_overflow(const char *str, int sign)
{
	unsigned long	ret;

	ret = 0;
	while (ft_isdigit(*str))
	{
		ret *= 10;
		if (sign == 1 && ret > (unsigned long)LONG_MAX - (*str - '0'))
			return ((int)LONG_MAX);
		if (sign == -1 && ret > (unsigned long)LONG_MAX + 1 - (*str - '0'))
			return ((int)LONG_MIN);
		ret += *str - '0';
		str++;
	}
	return (ret);
}

int	ft_atoi(const char *str)
{
	long	stack;
	long	result;
	int		sign;

	stack = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = handle_overflow(str, sign);
	return ((int)(sign * result));
}
