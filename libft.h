/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:34:05 by pscott            #+#    #+#             */
/*   Updated: 2018/11/07 11:40:36 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		isalnum(int c);
int		isascii(int c);
int		isprint(int c);
int		toupper(int c);
int		tolower(int c);
int		strcmp(const char *s1, const char *s2);
int		strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
#endif
