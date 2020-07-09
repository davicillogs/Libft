/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:09:11 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/09 10:24:28 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (*str2 && n--)
	{
		*str = *str2;
		if (*str == (unsigned char)c)
			return ((void *)(str + 1));
		str++;
		str2++;
	}
	return (NULL);
}
