/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:03:08 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/28 19:13:05 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	if (!s)
		return (NULL);
	ch = (char)c;
	while (*s != ch)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

// #include <stdio.h>
// int main()
// {
// 	char *result = ft_strchr(NULL, 0);
// 	printf("%s", result);
// }