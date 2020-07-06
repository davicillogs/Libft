/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 12:09:07 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/01 12:31:49 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle , size_t len)
{
	size_t len_needle;

	len_needle = ft_strlen(needle);
	if (*needle)
		return ((char *) haystack);
	while (*haystack++ && len-- >= len_needle)
	{
		if(*haystack == *needle && (ft_strncmp(haystack, needle, len_needle) == 0))
			return((char*) haystack);
		haystack++;
	}
	return (NULL);
}
