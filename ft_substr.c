/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 21:08:15 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/13 11:55:06 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*ptr;
	unsigned int		i;
	unsigned int		len_s;

	i = 0;
	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= len_s)
		return (ft_strdup(""));
	if (!(ptr = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len && i <= len_s)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
