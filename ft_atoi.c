/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:09:17 by pscott            #+#    #+#             */
/*   Updated: 2018/11/07 13:22:21 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int modif;
	int finalnb;

	i = 0;
	modif = 1;
	finalnb = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == '\b'
			|| str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		i++;
		modif = -1;
	}
	if (str[i] == '+')
		i++;
	while (ft_isnum(str[i] - '0'))
	{
		digit = str[i] - '0';
		finalnb = finalnb * 10 + digit;
		i++;
	}
	return (finalnb * modif);
}
