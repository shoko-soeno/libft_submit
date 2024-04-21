/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:56:16 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/17 20:10:56 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (j <= i)
	{
		dup[j] = src[j];
		j++;
	}
	return (dup);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char *original = "Hello, world!";
//     char *dup1, *dup2;
//     dup1 = strdup(original);
//     dup2 = ft_strdup(original);
//     if (dup1 == NULL || dup2 == NULL) {
//         printf("Memory allocation failed\n");
//         free(dup1);
//         free(dup2);
//         return 1;
//     }
//     printf("Original: %s\n", original);
//     printf("strdup: %s\n", dup1);
//     printf("ft_strdup: %s\n", dup2);
//     free(dup1);
//     free(dup2);
//     return 0;
// }
// 1. Calculate String Length:
// 2. dup = (char *)malloc((i + 1) * sizeof(char));
// Here, memory is allocated for i + 1 characters 
// (including the null character) using the malloc function, 
// which dynamically allocates memory and returns its address.
// 3. Check Memory Allocation:
// if (dup == NULL) return NULL;
// If malloc fails to allocate memory, it returns NULL.
// 4. Copy
// while (j <= i) { dup[j] = src[j]; j++; }
// This loop copies each character from the source string src 
// to the newly allocated memory dup, including the null character.