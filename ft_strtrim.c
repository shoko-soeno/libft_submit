/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:27:51 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/22 20:13:36 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (is_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (is_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(size * sizeof(char) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s1, size + 1);
	return (new);
}

// int main() {
// 	char const *s1 = "---Hello-World---";
// 	char const *set = "-";
// 	char *trimmed;

// 	trimmed = ft_strtrim(s1, set);
// 	if (trimmed != NULL) {
// 		printf("Original: '%s'\n", s1);
// 		printf("Trimmed: '%s'\n", trimmed);
// 		free(trimmed);
// 	} else {
// 		printf("Failed to allocate memory for trimmed string.\n");
// 	}
// 	return 0;
// }