/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:48:23 by pscott            #+#    #+#             */
/*   Updated: 2018/11/08 11:59:41 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	i;

	if (s && f)
	{
		if (!(res = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (s[i])
		{
			res[i] = (*f)(s[i]);
			i++;
		}
	}
	return (res);
}
