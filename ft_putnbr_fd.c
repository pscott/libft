/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:15:00 by pscott            #+#    #+#             */
/*   Updated: 2018/11/08 17:16:36 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_pustr_fd("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-');
		n = -n;
	}
	if (n / 10 < 1)
	{
		ft_putchar_fd(n + '0');
		return ;
	}
	ft_putnbr_fd(n / 10);
	ft_putchar_fd(n % 10 + '0');
}
