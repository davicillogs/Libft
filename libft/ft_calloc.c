/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 18:57:28 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/07 09:14:49 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (count == 0 || size == 0)
		return (NULL);
	ptr = (void *)malloc(count * size);
	while (i <= count)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
