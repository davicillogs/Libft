/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:20:35 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/06 22:32:31 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ptr;
	int 	count;

	j = 0;
	count = ft_strcountchr(s,c);
	ptr = (char **)malloc((sizeof(char *) * count) + 1);

	while(count-- + 1)
	{
		while(*s == c)
			s++;
		i = 0;
		while(s[i] != c && s[i])
			i++;
		ptr[j] = (char *)malloc(++i);
		ft_memcpy(ptr[j], s, i - 1);
		ptr[j][i -1] = 0;
		s += i;
		j++;
	}
	ptr[j] = 0;
	return(ptr);
}
