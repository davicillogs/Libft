/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 12:09:07 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/03 18:17:31 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle , size_t len)
{
	size_t len_needle;
	char	*str;

	str = (char *)haystack;
	len_needle = ft_strlen(needle);
	if (*needle)
		return (str);
	while (*str++ && len-- >= len_needle)
	{
		if(*str == *needle && (ft_strncmp(str, (char *)needle, len_needle) == 0))
			return(str);
		str++;
	}
	return (NULL);
}
