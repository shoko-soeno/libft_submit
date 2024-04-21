/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:07:00 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/21 17:26:46 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	int				direction;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	direction = 1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		direction = -1;
		d += len - 1;
		s += len - 1;
	}
	while (i < len)
	{
		*d = *s;
		d += direction;
		s += direction;
		i++;
	}
	return (dst);
}

// int main()
// {
// 	char src[100] = "Hello, world!";
// 	char dest[100];
// 	// NULL
// 	void *result = ft_memmove(NULL, NULL, 10);  // void * で型を一般化
// 	if (result == NULL) {
// 		printf("NULL pointer given: %p\n", result);
// 	} else {
// 		printf("Unexpected behavior with NULL pointers.\n");
// 	}
// 	// Overlap
// 	char overlap_src[8] = "apple";
// 	ft_memmove(overlap_src + 2, overlap_src, 3);
// 	printf("Overlap simulation: %s\n", overlap_src);
// 	return 0;
// }
// overlapexample
// pexamplexample