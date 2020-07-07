/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:28:13 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/07 13:22:22 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ptr;
	int		cdigits;
	int		sign;
	int		digits;
	int		nbr;

	digits = 1;
	sign = 0;
	nbr = n;
	while (nbr / 10 > 0)
	{
		nbr = nbr / 10;
		if (nbr < 0)
			nbr *= -1;
		digits++;
	}
	cdigits = digits;
	if (!(ptr = (char *)malloc(digits + 1 + sign)))
		return (NULL);
	if (n < 0)
	{
		sign = 1;
		ptr[0] = '-';
		if (n >= 10 || n <= -10)
			ptr[digits + sign - 1] = 48 + ((n % 10) * -1);
		else
			ptr[digits + sign - 1] = 48 + (-n);

		n = n / -10;
		digits--;
	}
	while (digits)
	{
		if (n > 9)
			ptr[digits - 1] = 48 + (n % 10);
		else
			ptr[digits - 1] = 48 + n;

		n = n / 10;
		digits--;
	}
	ptr[cdigits + sign] = 0;
	return (ptr);
}
