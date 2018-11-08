/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:21:22 by pscott            #+#    #+#             */
/*   Updated: 2018/11/08 11:14:32 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*csrc;
	char	*cdest;
	char	*tmp;
	size_t	i;

	csrc = (char *)src;
	cdest = (char *)dest;
	tmp = ft_strnew(len);
	i = 0;
	while (i < len)
	{
		tmp[i] = ((char *)csrc)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char *)cdest)[i] = tmp[i];
		i++;
	}
	ft_strdel(&tmp);
	return (dest);
}
