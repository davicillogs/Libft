/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 19:19:45 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/03 17:23:28 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		lenstr;
	int		i;
	char	*ptr;

	i = 0;
	lenstr = ft_strlen(s1);
	ptr = (char *) malloc (lenstr + 1);

	if (!ptr)
	{
		errno = ENOMEN;
		return (NULL);
	}

	while(i <= lenstr)
	{
		ptr[i] = s1[i];
		i++;
	}

	return (ptr);
}
