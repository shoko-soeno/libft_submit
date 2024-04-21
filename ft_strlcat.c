/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:28:49 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/19 22:24:41 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dst == NULL || src == NULL)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	if (dstsize <= dest_len)
	{
		return (dstsize + src_len);
	}
	while (src[i] != '\0' && dest_len + i < dstsize - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < dstsize)
		dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
