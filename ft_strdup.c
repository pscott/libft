/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:44:36 by pscott            #+#    #+#             */
/*   Updated: 2018/11/07 11:56:36 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *res;

	if (!(res = (char *)malloc(sizeof(*res) * (ft_strlen(s1) + 1))))
		return (NULL);
	ft_strcpy(res, src);
	return (res);
}
