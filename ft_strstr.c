/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:42:56 by pscott            #+#    #+#             */
/*   Updated: 2018/11/07 13:05:54 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] = needle[j] && needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == 0)
			return (haystack[i - j]);
		i++;
	}
	return (NULL);
}
