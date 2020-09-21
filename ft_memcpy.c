/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 09:29:08 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/07 09:15:49 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *s_dst;
	unsigned char *s_src;

	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		(*s_dst++) = (*s_src++);
	return (dst);
}
