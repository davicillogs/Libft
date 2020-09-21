/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:58:03 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/07 12:04:44 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *save;

	save = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
		*dest++ = *src++;
	*dest = '\0';
	return (save);
}
