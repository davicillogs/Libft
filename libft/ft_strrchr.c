/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:45:04 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/01 10:52:19 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char *aux;

	str = (char *)s;

	while(*str)
		str++;
	aux = str--;

	while (*str)
		if (*str-- == (char)c)
			return (++str);
	if (c != '\0')
		return(NULL);
	return(aux);
}
