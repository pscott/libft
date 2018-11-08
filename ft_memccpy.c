/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:57:57 by pscott            #+#    #+#             */
/*   Updated: 2018/11/08 10:23:10 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	size_t	i;

	while (i < n)
	{
		if ((unsigned char*)s[i] == (unsigned char)c)
			return (d[i + 1]);
		((char *)d)[i] = ((char *)s)[i];
		i++;
	}
	return (NULL);
}
