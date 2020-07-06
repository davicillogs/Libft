/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:45:04 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/07 00:30:19 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	int				i;
	str = (char *)s;

	i = 0;
	while(str[i])
		i++;
	if (!c)
		return(&str[i]);
	i -= 1;
	while ( i >= 0 && str[i])
	{

		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return(NULL);
}
