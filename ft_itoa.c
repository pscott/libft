/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:50:48 by pscott            #+#    #+#             */
/*   Updated: 2018/11/09 14:06:27 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	get_len(int n, int *len)
{
  if (n == -2147483648)
  {
    *len = 11;
    return ;
  }
  if (n < 0)
  {
    *len = *len + 1;
    n = -n;
  }
  if (n / 10 < 1)
  {
    *len = *len + 1;
    return ;
  }
  get_len(n / 10, len);
  *len = *len + 1;
}

static void	fill_itoa(int n, char *src, int len)
{
  if (n / 10 < 1)
  {
    src[len - 1] = n + '0';
    return ;
  }
  fill_itoa(n / 10, src, len - 1);
  src[len - 1] = n % 10 + '0';
}

static char *min_int(char *res)
{
  char  *num;
  int   i;

  num = "-2147483648";
  i = 0;
  while (i < 11)
  {
    res[i] = num[i];
    i++;
  }
  return (res);
}

char		*ft_itoa(int n)
{
  char	*res;
  int		len;

  len = 0;
  get_len(n, &len);
  if (!(res = ft_strnew(len)))
    return (NULL);
  if (n == -2147483648)
    return (min_int(res));
  if (n < 0)
  {
    res[0] = '-';
    fill_itoa(-n, &res[1], len - 1);
  }
  else
    fill_itoa(n, res, len);
  return (res);
}
