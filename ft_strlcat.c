/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbolat <bbolat@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:06:45 by bbolat            #+#    #+#             */
/*   Updated: 2022/02/07 11:09:05 by bbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	c;
	size_t	d;

	if (destsize <= ft_strlen(dest))
		return (destsize + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < destsize)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest [c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
