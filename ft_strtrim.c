/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 14:55:45 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/15 18:18:01 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		setcontains(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		slesschr;
	int		flesschr;
	int		lens1;
	int		i;

	i = 0;
	slesschr = 0;
	flesschr = 0;
	lens1 = ft_strlen(s1);
	while (setcontains(s1[i++], set))
		slesschr += 1;
	i = lens1 - 1;
	while (slesschr < lens1 && setcontains(s1[i--], set))
		flesschr += 1;
	ptr = ft_strndup(s1 + slesschr, lens1 - (slesschr + flesschr));
	ptr[lens1 - (slesschr + flesschr)] = 0;
	return (ptr);
}
