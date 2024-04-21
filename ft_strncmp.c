/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:28:38 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/17 14:56:42 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// int ft_strncmp(char *s1, char *s2, unsigned int n);
// int main() {
//     char *str1 = "Hello World";
//     char *str2 = "Hello World";
//     char *str3 = "Hello";
//     char *str4 = "Hemlo World";
//     unsigned int n;
//     n = 5;
//     printf("same, n=5: %d", ft_strncmp(str1, str2, n));
//     printf(" vs %d\n", strncmp(str1, str2, n));
//     n = 10;
//     printf("same, n=10: %d", ft_strncmp(str1, str2, n));
//     printf(" vs %d\n",  strncmp(str1, str2, n));
//     n = 5;
//     printf("diff, n=5: %d", ft_strncmp(str1, str3, n));
//     printf("vs %d\n", strncmp(str1, str3, n));
//     n = 10;
//     printf("diff, n=10: %d", ft_strncmp(str1, str4, n));
//     printf(" vs %d\n", strncmp(str1, str4, n));
// }
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
