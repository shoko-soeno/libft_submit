/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:03:08 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/24 11:07:22 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	array = (void *)malloc(nmemb * size);
	if (array == NULL)
	{
		//free(array);
		return (NULL);
	}
	ft_bzero(array, (nmemb * size));
	return (array);
}

// int main() {
// 	// what happens if I run malloc(0)?
//     int *ptr_zero = ft_calloc(0, sizeof(int));
//     if (ptr_zero == NULL) {
//         printf("ft_calloc with nmemb=0 returned NULL\n");
//     } else {
//         printf("ft_calloc with nmemb=0 returned a valid pointer\n");
//         free(ptr_zero); 
//     }
//     int *ptr_zero_size = ft_calloc(10, 0);
//     if (ptr_zero_size == NULL) {
//         printf("ft_calloc with size=0 returned NULL\n");
//     } else {
//         printf("ft_calloc with size=0 returned a valid pointer\n");
//         free(ptr_zero_size);
//     }
//     // normal case
//     int *ptr_normal = ft_calloc(10, sizeof(int));
//     if (ptr_normal == NULL) {
//         printf("ft_calloc with normal parameters returned NULL\n");
//     } else {
//         printf("ft_calloc with normal parameters returned a valid pointer\n");
//         // initialize the memory with zero
//         for (int i = 0; i < 10; i++) {
//             if (ptr_normal[i] != 0) {
//                 printf("Memory not properly zero-initialized at index %d\n", i);
//             }
//         }
//         free(ptr_normal); // 解放
//     }
//     return 0;
// }