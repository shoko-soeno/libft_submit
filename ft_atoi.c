/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:25:49 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/28 14:04:42 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	handle_overflow(const char *str, int sign)
{
	unsigned long	ret;
	int				digit;
	unsigned long	cutoff;

	ret = 0;
	cutoff = (unsigned long)LONG_MAX;
	while (ft_isdigit(*str))
	{
		digit = *str - '0';
		if (sign == 1 && ret > ((cutoff - digit) / 10))
			return (LONG_MAX);
		if (sign == -1 && ret > ((cutoff + 1 - digit) / 10))
			return (LONG_MIN);
		ret = ret*10 + digit;
		str++;
	}
	return (ret);
}

static int is_space(const char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = (int)handle_overflow(str, sign);
	return ((sign * result));
}

// int main()
// {	
// 	int original = atoi("9223372036854775808");
// 	int ft = ft_atoi("9223372036854775808");
// 	printf("%d\n", original);
// 	printf("%d\n", ft);
// }
// // int original = atoi("18446744073709551620");
// // 	int ft = ft_atoi("18446744073709551620");
// /* 27. LONG_MAX + 1 */ ASSERT_EQ_I(atoi("9223372036854775808"), ft_atoi("9223372036854775808"));
// 	/* 28. LONG_MIN - 1 */ ASSERT_EQ_I(atoi("-9223372036854775809"), ft_atoi("-9223372036854775809"));