/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 20:48:42 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/06 22:01:56 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcount(const char *str, const char *find)
{
	char *f;
	char *pos;
	int total;

	f = (char *) find;
	total = 0;

	while (*str)
	{
		pos = (char *)str;
		f = (char *) find;

		while (*pos && *f && *pos == *f)
		{
			pos++;
			f++;
		}
		if (!(*f))
			total++;
		str++;
	}
	return (total);
}
