/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:53:58 by pscott            #+#    #+#             */
/*   Updated: 2018/11/07 17:18:35 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		trim_len(char const *s)
{
	size_t	i;
	size_t	origin_len;

	origin_len = ft_strlen(s);
	i = 0;
	while (s[origin_len - i - 1] == '\t' || *s == ' ' || *s == '\n')
		i++;
	return (origin_len - i);
}

char				*ft_strtrim(char const *s)
{
	char		*res;
	size_t		i;
	size_t		len;

	i = 0;
	while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
		i++;
	if (s[i] == 0)
		return (NULL);
	len = trim_len(&s[i]);
	if (!(res = ft_strnew(len + 1)))
		return (NULL);
	ft_strncpy(res, &s[i], len + 1);
	return (res);
}
