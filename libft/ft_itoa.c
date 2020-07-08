/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:28:13 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/08 14:16:35 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		countdigits(int nbr)
{
	int total;

	total = 1;
	if (nbr / 10 > 0 || nbr / -10 > 0)
		return (total + countdigits(nbr / 10));
	return (total);
}
char	*ft_itoa(int n)
{
	char	*ptr;
	int		sign;
	int		ndigits;

	ndigits = countdigits(n);
	sign = 0;
	if (n < 0)
		sign = 1;
	if(!(ptr = (char *)malloc(sizeof(char) * (ndigits + sign + 1))))
		return (NULL);
	if(sign)
		ptr[0] = '-';
	while(ndigits)
	{
		if (sign)
			ptr[ndigits + sign - 1] = 48 + ((n % 10) * -1);
		else
			ptr[ndigits + sign - 1] = 48 + (n % 10);
		n /= 10;
		ndigits--;
	}
	return (ptr);
}
