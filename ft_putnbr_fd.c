/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:27:42 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/09 10:06:00 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n < 10)
		ft_putchar_fd(n + '0', fd);
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n > -10)
			ft_putnbr_fd(n * -1, fd);
		else
		{
			ft_putnbr_fd((n / 10) * -1, fd);
			ft_putchar_fd(((n % 10) * -1) + '0', fd);
		}
	}
}
