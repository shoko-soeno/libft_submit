/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:03:08 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/21 10:34:07 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb && size > SIZE_MAX / nmemb)
	{
		return (NULL);
	}
	array = (void *)malloc(nmemb * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	ft_bzero(array, (nmemb * size));
	return (array);
}
