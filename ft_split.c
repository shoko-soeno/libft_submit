/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:00:51 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/24 19:18:51 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *str, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			cnt++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (cnt);
}

static void	*free_array(char **arr)
{
	char **p = arr;
	while (*p)
	{
			free(*p);
			p++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c)+1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > start)
		{
			result[j] = ft_substr(&s[start], 0, i - start);
			if (!result[j])
				return (free_array(result));
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

//strdupとstrcharを合わせた関数を作って、文字列と文字を受け取って、sのなかでcがあるところまでを切り出す関数を作った
