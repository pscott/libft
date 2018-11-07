/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:25:01 by pscott            #+#    #+#             */
/*   Updated: 2018/11/07 15:54:02 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	if (size <= 0)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(*res) * (size + 1))))
		return (NULL);
	i = 0;
	while (size + 1)
	{
		res[i] = 0;
		i++;
		size--;
	}
	return (res);
}
