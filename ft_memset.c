/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:15:01 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/21 14:21:34 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}

// int main(void)
// {
// 	char buffer[10];
// 	memset(buffer, 'x', 10);
// 	ft_memset(buffer, 'x', 10);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%c", buffer[i]);
// 	}
// 	printf("\n");
// }