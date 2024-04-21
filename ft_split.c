/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:00:51 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/19 23:06:23 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **pptr, int i)
{
	while (i > 0)
	{
		i--;
		free(pptr[i]);
	}
	free(pptr);
	return (NULL);
}

int	count_words(char const *str, char c)
{
	int	i;
	int	cnt;

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

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**split_words(char const *s, char c, char **result, int cnt_words)
{
	int	i;
	int	j;
	int	word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (j < cnt_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		result[j] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!result[j])
			return (free_array(result, j));
		ft_putword(result[j], s, i, word_len);
		word_len = 0;
		j++;
	}
	result[j] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		cnt_words;

	if (!s)
		return (NULL);
	cnt_words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (cnt_words + 1));
	if (!result)
		return (NULL);
	result = split_words(s, c, result, cnt_words);
	return (result);
}
