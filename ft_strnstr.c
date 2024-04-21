/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:31:25 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/19 23:01:53 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (str == NULL || to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] != '\0'
				&& str[i + j] == to_find[j] && (i + j) < len)
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				return ((char *)&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}
