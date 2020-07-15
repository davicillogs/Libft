/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:52:05 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/15 18:17:30 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void				copiar(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
}

static unsigned int		longitud(char *a)
{
	unsigned int i;

	i = 0;
	while (*a)
	{
		i++;
		a++;
	}
	return (i);
}

unsigned int			ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int srclen;

	srclen = longitud(src);
	if (srclen + 1 < size)
		copiar(dest, src, srclen + 1);
	else if (size != 0)
	{
		copiar(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (srclen);
}
