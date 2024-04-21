/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:57:12 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/21 17:26:50 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
// 	char src[100] = "Hello, world!";
// 	//int src_len = ft_strlen(src);
// 	char dest[100];
// 	ft_memcpy(dest, src, 13 + 1);
// 	printf("Normal copy: %s\n", dest);
// 	ft_memcpy(src, src, 13 + 1);
// 	printf("dest = src: %s\n", src);  
// 	// NULL
// 	void *result = ft_memcpy(NULL, NULL, 10);  // void * で型を一般化
// 	if (result == NULL) {
// 		printf("NULL pointer given: %p\n", result);
// 	} else {
// 		printf("Unexpected behavior with NULL pointers.\n");
// 	}
// 	// Overlap
// 	char overlap_src[8] = "apple";
// 	ft_memcpy(overlap_src + 2, overlap_src, 3);
// 	//memcpy(overlap_src, overlap_src + 5, 10); //undefined
// 	printf("Overlap simulation: %s\n", overlap_src);  // 正しい変数を出力
// 	return 0;
// }
// overlapexample
// pexamplexample