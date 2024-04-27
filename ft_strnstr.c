/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:31:25 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/27 06:12:18 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *str, const char *to_find, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (!str || !to_find || to_find[0] == '\0')
// 		return ((char *)str);
// 	while (str[i] != '\0' && i < len)
// 	{
// 		if (str[i] == to_find[0])
// 		{
// 			j = 0;
// 			while (to_find[j] != '\0'
// 				&& str[i + j] == to_find[j] && (i + j) < len)
// 			{
// 				j++;
// 			}
// 			if (to_find[j] == '\0')
// 				return ((char *)&str[i]);
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!str || !to_find || to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while(to_find[j] && str[i + j] == to_find[j] && (i + j) < len){
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

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

// int main(){
// 	char *s = "qwert";
// 	char *result = ft_strnstr(s, NULL, 3);
// 	printf("%s", result);
// }