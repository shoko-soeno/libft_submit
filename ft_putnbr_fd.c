/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:01:07 by ssoeno            #+#    #+#             */
/*   Updated: 2024/04/27 06:40:00 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if ( nb < 10 )
	{
		ft_putchar_fd(nb + '0', fd);
	} else {
		ft_putnbr_fd(nb / 10, fd); //上位の桁を再帰的に処理
		ft_putchar_fd((nb % 10) + '0', fd); //現在の文字を出力
	}		
}

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }
// int main(){
// 	ft_putnbr_fd(-2147483648, 1);
// }
