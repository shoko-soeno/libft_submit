/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:28:49 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/27 07:30:35 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dst == NULL || src == NULL)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (dstsize <= dest_len || dstsize == 0)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && dest_len + i < dstsize - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < dstsize)
		dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}

dest_len = 0
if (dst)
	dst_len = ft_strlen(dst);
return は2つに減らせるはず。
if (dstsize <= dest_len || dstsize == 0)で0はチェックできるからNULL不要？
// ASSERT_EQ_I(ft_strlcat(NULL, src1, 0), strlcat(NULL, src2, 0));
// int main() {
// 	char dst[10] = "Hello";
// 	const char *src = " World!";
// 	size_t result;
// 	//result = ft_strlcat(NULL, src, sizeof(dst));
// 	//result = strlcat(NULL, src, sizeof(dst));
// 	//result = ft_strlcat(NULL, src, sizeof(dst));
// 	result = strlcat(NULL, src, 0);
// 	//result = ft_strlcat(NULL, src, 0);
// 	printf("Return value: %zu\n", result);
// 	printf("Result = %s\n", &*dst);
// 	return 0;
// }