/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 14:55:45 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/07 09:21:55 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		setcontains(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ls1;
	int		lset;
	char	*ptr;
	char	*cptr;

	ls1 = ft_strlen(s1);
	lset = ft_strlen(set);
	if (!(ptr = (char *)malloc(ls1 - (ft_strcount(s1, set) * lset) + 1)))
		return (NULL);
	cptr = ptr;
	while (*s1)
	{
		if (ft_strncmp(s1, set, lset))
			*ptr++ = *s1++;
		else
			s1++;
	}
	*ptr = 0;
	return (cptr);
}
