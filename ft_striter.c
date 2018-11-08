/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:38:04 by pscott            #+#    #+#             */
/*   Updated: 2018/11/08 11:47:46 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *s))
{
	size_t	i;

	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			(*f)(s[i]);
			i++;
		}
	}
}
