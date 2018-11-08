/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:56:25 by pscott            #+#    #+#             */
/*   Updated: 2018/11/08 17:23:50 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char*))
{
	unsigned int	j;
	size_t			i;
	char			*res;

	j = 0;
	i = 0;
	if (s && f)
	{
		if (!(res = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (s[i])
		{
			res[i] = (*f)(j, &((char *)s)[i]);
			i++;
		}
		return (res);
	}
	return (NULL);
}
