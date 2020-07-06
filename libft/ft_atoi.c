/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 12:45:20 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/03 15:09:33 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int total;
	int sign;

	total = 0;
	sign = 1;
	while (ft_isspace(*str++) != 0);
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <=57)
	{
		total = total * 10 + (*str - 48);
		str++;
	}
	return (total * sign);
}
