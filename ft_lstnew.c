/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:35:56 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/22 14:43:05 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main() {
//     int num = 42;
//     t_list *node1 = ft_lstnew(&num);
//     printf("Test 1 Passed: %d\n", *(int *)(node1->content));
//     char *str = "Hello, World!";
//     t_list *node2 = ft_lstnew(str);
//     printf("Test 2 Passed: %s\n", (char *)(node2->content));
//     free(node1);
//     free(node2);
//     return 0;
// }