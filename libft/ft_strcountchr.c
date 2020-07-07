/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcountchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:57:28 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/07 09:17:24 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcountchr(char const *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 1;
	while (str[i])
	{
		if (str[i] == c && (str[i + 1] != c && str[i + 1]))
			count++;
		i++;
	}
	if (str[i - 1] != c)
		count++;
	return (count);
}
