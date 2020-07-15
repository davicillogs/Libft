/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 19:19:45 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/15 18:05:55 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, unsigned int n)
{
	int		lenstr;
	int		i;
	char	*ptr;

	i = 0;
	lenstr = ft_strlen(s1);
	if (!(ptr = (char *)malloc(n + 1)))
		return (NULL);
	while (n-- && s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
