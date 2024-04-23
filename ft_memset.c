/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:15:01 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/23 23:23:41 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	d;
	
	d = (unsigned char)c;
	ptr = (unsigned char *)b;
	while (len-- > 0)
		*ptr++ = d;
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	// char buffer[10];
// 	void *p1 = memset(NULL, 'x', 10);
// 	void *p2 = ft_memset(NULL, 'x', 10);
// 	printf("p1: %p\np2: %p\n", p1, p2);
// 	// for (int i = 0; i < 10; i++)
// 	// {
// 	// 	printf("%c", buffer[i]);
// 	// }
// 	// printf("\n");
// }
// bがNULLの時にエラーが起きている？仕様的にはNULLガードは要らないかもしれないが。