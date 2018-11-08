/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:41:39 by pscott            #+#    #+#             */
/*   Updated: 2018/11/08 14:30:38 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (len - i)
	{
		if (src[i])
		{
			dst[i] = src[i];
			i++;
		}
		else
		{
			dst[i] = 0;
			i++;
		}
	}
	return (dst);
}
